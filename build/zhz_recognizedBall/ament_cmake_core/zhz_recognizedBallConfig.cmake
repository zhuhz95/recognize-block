# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_zhz_recognizedBall_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED zhz_recognizedBall_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(zhz_recognizedBall_FOUND FALSE)
  elseif(NOT zhz_recognizedBall_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(zhz_recognizedBall_FOUND FALSE)
  endif()
  return()
endif()
set(_zhz_recognizedBall_CONFIG_INCLUDED TRUE)

# output package information
if(NOT zhz_recognizedBall_FIND_QUIETLY)
  message(STATUS "Found zhz_recognizedBall: 1.0.0 (${zhz_recognizedBall_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'zhz_recognizedBall' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${zhz_recognizedBall_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(zhz_recognizedBall_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${zhz_recognizedBall_DIR}/${_extra}")
endforeach()

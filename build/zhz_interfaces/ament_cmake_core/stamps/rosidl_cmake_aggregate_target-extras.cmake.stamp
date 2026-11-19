# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target zhz_interfaces::zhz_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${zhz_interfaces_TARGETS}.
if(zhz_interfaces_TARGETS AND NOT TARGET zhz_interfaces::zhz_interfaces)
  add_library(zhz_interfaces::zhz_interfaces INTERFACE IMPORTED)
  set_target_properties(zhz_interfaces::zhz_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${zhz_interfaces_TARGETS}")
endif()

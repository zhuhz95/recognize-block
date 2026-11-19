#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "zhz_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__zhz_interfaces__srv__DetectBlock_Request() -> *const std::ffi::c_void;
}

#[link(name = "zhz_interfaces__rosidl_generator_c")]
extern "C" {
    fn zhz_interfaces__srv__DetectBlock_Request__init(msg: *mut DetectBlock_Request) -> bool;
    fn zhz_interfaces__srv__DetectBlock_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetectBlock_Request>, size: usize) -> bool;
    fn zhz_interfaces__srv__DetectBlock_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetectBlock_Request>);
    fn zhz_interfaces__srv__DetectBlock_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetectBlock_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DetectBlock_Request>) -> bool;
}

// Corresponds to zhz_interfaces__srv__DetectBlock_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectBlock_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: rosidl_runtime_rs::String,

}



impl Default for DetectBlock_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !zhz_interfaces__srv__DetectBlock_Request__init(&mut msg as *mut _) {
        panic!("Call to zhz_interfaces__srv__DetectBlock_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetectBlock_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { zhz_interfaces__srv__DetectBlock_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { zhz_interfaces__srv__DetectBlock_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { zhz_interfaces__srv__DetectBlock_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetectBlock_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetectBlock_Request where Self: Sized {
  const TYPE_NAME: &'static str = "zhz_interfaces/srv/DetectBlock_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__zhz_interfaces__srv__DetectBlock_Request() }
  }
}


#[link(name = "zhz_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__zhz_interfaces__srv__DetectBlock_Response() -> *const std::ffi::c_void;
}

#[link(name = "zhz_interfaces__rosidl_generator_c")]
extern "C" {
    fn zhz_interfaces__srv__DetectBlock_Response__init(msg: *mut DetectBlock_Response) -> bool;
    fn zhz_interfaces__srv__DetectBlock_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetectBlock_Response>, size: usize) -> bool;
    fn zhz_interfaces__srv__DetectBlock_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetectBlock_Response>);
    fn zhz_interfaces__srv__DetectBlock_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetectBlock_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DetectBlock_Response>) -> bool;
}

// Corresponds to zhz_interfaces__srv__DetectBlock_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectBlock_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub w: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub h: i32,

}



impl Default for DetectBlock_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !zhz_interfaces__srv__DetectBlock_Response__init(&mut msg as *mut _) {
        panic!("Call to zhz_interfaces__srv__DetectBlock_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetectBlock_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { zhz_interfaces__srv__DetectBlock_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { zhz_interfaces__srv__DetectBlock_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { zhz_interfaces__srv__DetectBlock_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetectBlock_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetectBlock_Response where Self: Sized {
  const TYPE_NAME: &'static str = "zhz_interfaces/srv/DetectBlock_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__zhz_interfaces__srv__DetectBlock_Response() }
  }
}






#[link(name = "zhz_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__zhz_interfaces__srv__DetectBlock() -> *const std::ffi::c_void;
}

// Corresponds to zhz_interfaces__srv__DetectBlock
#[allow(missing_docs, non_camel_case_types)]
pub struct DetectBlock;

impl rosidl_runtime_rs::Service for DetectBlock {
    type Request = DetectBlock_Request;
    type Response = DetectBlock_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__zhz_interfaces__srv__DetectBlock() }
    }
}



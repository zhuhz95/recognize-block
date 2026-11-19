#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to zhz_interfaces__srv__DetectBlock_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectBlock_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: std::string::String,

}



impl Default for DetectBlock_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DetectBlock_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DetectBlock_Request {
  type RmwMsg = super::srv::rmw::DetectBlock_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      color: msg.color.to_string(),
    }
  }
}


// Corresponds to zhz_interfaces__srv__DetectBlock_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DetectBlock_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DetectBlock_Response {
  type RmwMsg = super::srv::rmw::DetectBlock_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        w: msg.w,
        h: msg.h,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      w: msg.w,
      h: msg.h,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      w: msg.w,
      h: msg.h,
    }
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



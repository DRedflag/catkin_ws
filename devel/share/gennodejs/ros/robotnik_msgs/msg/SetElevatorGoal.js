// Auto-generated. Do not edit!

// (in-package robotnik_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let ElevatorAction = require('./ElevatorAction.js');

//-----------------------------------------------------------

class SetElevatorGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.action = null;
    }
    else {
      if (initObj.hasOwnProperty('action')) {
        this.action = initObj.action
      }
      else {
        this.action = new ElevatorAction();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetElevatorGoal
    // Serialize message field [action]
    bufferOffset = ElevatorAction.serialize(obj.action, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetElevatorGoal
    let len;
    let data = new SetElevatorGoal(null);
    // Deserialize message field [action]
    data.action = ElevatorAction.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'robotnik_msgs/SetElevatorGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ba01edad69e94d31f2469c9b6db50a0e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    robotnik_msgs/ElevatorAction action
    
    ================================================================================
    MSG: robotnik_msgs/ElevatorAction
    int32 RAISE=1
    int32 LOWER=-1
    int32 STOP=0
    int32 NO_ACTION=1000
    
    int32 action
    # speed, height for future applications
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetElevatorGoal(null);
    if (msg.action !== undefined) {
      resolved.action = ElevatorAction.Resolve(msg.action)
    }
    else {
      resolved.action = new ElevatorAction()
    }

    return resolved;
    }
};

module.exports = SetElevatorGoal;

"use strict";

let SetElevator = require('./SetElevator.js')
let set_digital_output = require('./set_digital_output.js')
let home = require('./home.js')
let ack_alarm = require('./ack_alarm.js')
let SetTransform = require('./SetTransform.js')
let set_named_digital_output = require('./set_named_digital_output.js')
let SetNamedDigitalOutput = require('./SetNamedDigitalOutput.js')
let SetString = require('./SetString.js')
let get_digital_input = require('./get_digital_input.js')
let set_modbus_register_bit = require('./set_modbus_register_bit.js')
let set_height = require('./set_height.js')
let ResetFromSubState = require('./ResetFromSubState.js')
let get_modbus_register = require('./get_modbus_register.js')
let GetBool = require('./GetBool.js')
let LoggerQuery = require('./LoggerQuery.js')
let enable_disable = require('./enable_disable.js')
let SetBuzzer = require('./SetBuzzer.js')
let SetMotorStatus = require('./SetMotorStatus.js')
let get_alarms = require('./get_alarms.js')
let set_float_value = require('./set_float_value.js')
let set_analog_output = require('./set_analog_output.js')
let SetInt16 = require('./SetInt16.js')
let SetByte = require('./SetByte.js')
let GetPOI = require('./GetPOI.js')
let InsertTask = require('./InsertTask.js')
let set_modbus_register = require('./set_modbus_register.js')
let GetMotorsHeadingOffset = require('./GetMotorsHeadingOffset.js')
let set_ptz = require('./set_ptz.js')
let axis_record = require('./axis_record.js')
let set_odometry = require('./set_odometry.js')
let QueryAlarms = require('./QueryAlarms.js')
let GetPTZ = require('./GetPTZ.js')
let get_mode = require('./get_mode.js')
let SetMotorPID = require('./SetMotorPID.js')
let SetMotorMode = require('./SetMotorMode.js')
let SetEncoderTurns = require('./SetEncoderTurns.js')
let SetLaserMode = require('./SetLaserMode.js')
let set_CartesianEuler_pose = require('./set_CartesianEuler_pose.js')
let Record = require('./Record.js')
let set_mode = require('./set_mode.js')
let SetCurrent = require('./SetCurrent.js')

module.exports = {
  SetElevator: SetElevator,
  set_digital_output: set_digital_output,
  home: home,
  ack_alarm: ack_alarm,
  SetTransform: SetTransform,
  set_named_digital_output: set_named_digital_output,
  SetNamedDigitalOutput: SetNamedDigitalOutput,
  SetString: SetString,
  get_digital_input: get_digital_input,
  set_modbus_register_bit: set_modbus_register_bit,
  set_height: set_height,
  ResetFromSubState: ResetFromSubState,
  get_modbus_register: get_modbus_register,
  GetBool: GetBool,
  LoggerQuery: LoggerQuery,
  enable_disable: enable_disable,
  SetBuzzer: SetBuzzer,
  SetMotorStatus: SetMotorStatus,
  get_alarms: get_alarms,
  set_float_value: set_float_value,
  set_analog_output: set_analog_output,
  SetInt16: SetInt16,
  SetByte: SetByte,
  GetPOI: GetPOI,
  InsertTask: InsertTask,
  set_modbus_register: set_modbus_register,
  GetMotorsHeadingOffset: GetMotorsHeadingOffset,
  set_ptz: set_ptz,
  axis_record: axis_record,
  set_odometry: set_odometry,
  QueryAlarms: QueryAlarms,
  GetPTZ: GetPTZ,
  get_mode: get_mode,
  SetMotorPID: SetMotorPID,
  SetMotorMode: SetMotorMode,
  SetEncoderTurns: SetEncoderTurns,
  SetLaserMode: SetLaserMode,
  set_CartesianEuler_pose: set_CartesianEuler_pose,
  Record: Record,
  set_mode: set_mode,
  SetCurrent: SetCurrent,
};

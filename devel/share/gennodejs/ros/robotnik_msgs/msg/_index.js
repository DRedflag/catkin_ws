
"use strict";

let MotorReferenceValueArray = require('./MotorReferenceValueArray.js');
let Interfaces = require('./Interfaces.js');
let Alarms = require('./Alarms.js');
let RobotnikMotorsStatus = require('./RobotnikMotorsStatus.js');
let WatchdogStatus = require('./WatchdogStatus.js');
let Pose2DStamped = require('./Pose2DStamped.js');
let Data = require('./Data.js');
let PresenceSensorArray = require('./PresenceSensorArray.js');
let ElevatorStatus = require('./ElevatorStatus.js');
let OdomManualCalibrationStatusStamped = require('./OdomManualCalibrationStatusStamped.js');
let QueryAlarm = require('./QueryAlarm.js');
let PantiltStatus = require('./PantiltStatus.js');
let WatchdogStatusArray = require('./WatchdogStatusArray.js');
let SafetyModuleStatus = require('./SafetyModuleStatus.js');
let BoolArray = require('./BoolArray.js');
let SubState = require('./SubState.js');
let ElevatorAction = require('./ElevatorAction.js');
let MotorHeadingOffset = require('./MotorHeadingOffset.js');
let ptz = require('./ptz.js');
let StringStamped = require('./StringStamped.js');
let Pose2DArray = require('./Pose2DArray.js');
let MotorStatus = require('./MotorStatus.js');
let inputs_outputs = require('./inputs_outputs.js');
let BatteryDockingStatus = require('./BatteryDockingStatus.js');
let LaserStatus = require('./LaserStatus.js');
let OdomCalibrationStatusStamped = require('./OdomCalibrationStatusStamped.js');
let RecordStatus = require('./RecordStatus.js');
let InverterStatus = require('./InverterStatus.js');
let StringArray = require('./StringArray.js');
let OdomManualCalibrationStatus = require('./OdomManualCalibrationStatus.js');
let Registers = require('./Registers.js');
let encoders = require('./encoders.js');
let LaserMode = require('./LaserMode.js');
let MotorsStatus = require('./MotorsStatus.js');
let alarmsmonitor = require('./alarmsmonitor.js');
let BatteryStatusStamped = require('./BatteryStatusStamped.js');
let MotorCurrent = require('./MotorCurrent.js');
let MotorReferenceValue = require('./MotorReferenceValue.js');
let named_input_output = require('./named_input_output.js');
let Axis = require('./Axis.js');
let MotorPID = require('./MotorPID.js');
let BatteryStatus = require('./BatteryStatus.js');
let AlarmSensor = require('./AlarmSensor.js');
let State = require('./State.js');
let PresenceSensor = require('./PresenceSensor.js');
let MotorsStatusDifferential = require('./MotorsStatusDifferential.js');
let ArmStatus = require('./ArmStatus.js');
let alarmmonitor = require('./alarmmonitor.js');
let Logger = require('./Logger.js');
let named_inputs_outputs = require('./named_inputs_outputs.js');
let OdomCalibrationStatus = require('./OdomCalibrationStatus.js');
let ReturnMessage = require('./ReturnMessage.js');
let BatteryDockingStatusStamped = require('./BatteryDockingStatusStamped.js');
let Cartesian_Euler_pose = require('./Cartesian_Euler_pose.js');
let PantiltStatusStamped = require('./PantiltStatusStamped.js');
let Register = require('./Register.js');
let SetElevatorAction = require('./SetElevatorAction.js');
let SetElevatorFeedback = require('./SetElevatorFeedback.js');
let SetElevatorActionGoal = require('./SetElevatorActionGoal.js');
let SetElevatorActionResult = require('./SetElevatorActionResult.js');
let SetElevatorActionFeedback = require('./SetElevatorActionFeedback.js');
let SetElevatorResult = require('./SetElevatorResult.js');
let SetElevatorGoal = require('./SetElevatorGoal.js');

module.exports = {
  MotorReferenceValueArray: MotorReferenceValueArray,
  Interfaces: Interfaces,
  Alarms: Alarms,
  RobotnikMotorsStatus: RobotnikMotorsStatus,
  WatchdogStatus: WatchdogStatus,
  Pose2DStamped: Pose2DStamped,
  Data: Data,
  PresenceSensorArray: PresenceSensorArray,
  ElevatorStatus: ElevatorStatus,
  OdomManualCalibrationStatusStamped: OdomManualCalibrationStatusStamped,
  QueryAlarm: QueryAlarm,
  PantiltStatus: PantiltStatus,
  WatchdogStatusArray: WatchdogStatusArray,
  SafetyModuleStatus: SafetyModuleStatus,
  BoolArray: BoolArray,
  SubState: SubState,
  ElevatorAction: ElevatorAction,
  MotorHeadingOffset: MotorHeadingOffset,
  ptz: ptz,
  StringStamped: StringStamped,
  Pose2DArray: Pose2DArray,
  MotorStatus: MotorStatus,
  inputs_outputs: inputs_outputs,
  BatteryDockingStatus: BatteryDockingStatus,
  LaserStatus: LaserStatus,
  OdomCalibrationStatusStamped: OdomCalibrationStatusStamped,
  RecordStatus: RecordStatus,
  InverterStatus: InverterStatus,
  StringArray: StringArray,
  OdomManualCalibrationStatus: OdomManualCalibrationStatus,
  Registers: Registers,
  encoders: encoders,
  LaserMode: LaserMode,
  MotorsStatus: MotorsStatus,
  alarmsmonitor: alarmsmonitor,
  BatteryStatusStamped: BatteryStatusStamped,
  MotorCurrent: MotorCurrent,
  MotorReferenceValue: MotorReferenceValue,
  named_input_output: named_input_output,
  Axis: Axis,
  MotorPID: MotorPID,
  BatteryStatus: BatteryStatus,
  AlarmSensor: AlarmSensor,
  State: State,
  PresenceSensor: PresenceSensor,
  MotorsStatusDifferential: MotorsStatusDifferential,
  ArmStatus: ArmStatus,
  alarmmonitor: alarmmonitor,
  Logger: Logger,
  named_inputs_outputs: named_inputs_outputs,
  OdomCalibrationStatus: OdomCalibrationStatus,
  ReturnMessage: ReturnMessage,
  BatteryDockingStatusStamped: BatteryDockingStatusStamped,
  Cartesian_Euler_pose: Cartesian_Euler_pose,
  PantiltStatusStamped: PantiltStatusStamped,
  Register: Register,
  SetElevatorAction: SetElevatorAction,
  SetElevatorFeedback: SetElevatorFeedback,
  SetElevatorActionGoal: SetElevatorActionGoal,
  SetElevatorActionResult: SetElevatorActionResult,
  SetElevatorActionFeedback: SetElevatorActionFeedback,
  SetElevatorResult: SetElevatorResult,
  SetElevatorGoal: SetElevatorGoal,
};


"use strict";

let MotorGains = require('./MotorGains.js')
let OperatingModes = require('./OperatingModes.js')
let RegisterValues = require('./RegisterValues.js')
let Reboot = require('./Reboot.js')
let TorqueEnable = require('./TorqueEnable.js')
let RobotInfo = require('./RobotInfo.js')

module.exports = {
  MotorGains: MotorGains,
  OperatingModes: OperatingModes,
  RegisterValues: RegisterValues,
  Reboot: Reboot,
  TorqueEnable: TorqueEnable,
  RobotInfo: RobotInfo,
};

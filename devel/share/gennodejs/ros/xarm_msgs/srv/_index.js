
"use strict";

let GetErr = require('./GetErr.js')
let Move = require('./Move.js')
let GripperState = require('./GripperState.js')
let SetLoad = require('./SetLoad.js')
let GetDigitalIO = require('./GetDigitalIO.js')
let GetControllerDigitalIO = require('./GetControllerDigitalIO.js')
let GetAnalogIO = require('./GetAnalogIO.js')
let GripperMove = require('./GripperMove.js')
let SetInt16 = require('./SetInt16.js')
let GripperConfig = require('./GripperConfig.js')
let TCPOffset = require('./TCPOffset.js')
let SetToolModbus = require('./SetToolModbus.js')
let ConfigToolModbus = require('./ConfigToolModbus.js')
let SetDigitalIO = require('./SetDigitalIO.js')
let SetAxis = require('./SetAxis.js')
let ClearErr = require('./ClearErr.js')

module.exports = {
  GetErr: GetErr,
  Move: Move,
  GripperState: GripperState,
  SetLoad: SetLoad,
  GetDigitalIO: GetDigitalIO,
  GetControllerDigitalIO: GetControllerDigitalIO,
  GetAnalogIO: GetAnalogIO,
  GripperMove: GripperMove,
  SetInt16: SetInt16,
  GripperConfig: GripperConfig,
  TCPOffset: TCPOffset,
  SetToolModbus: SetToolModbus,
  ConfigToolModbus: ConfigToolModbus,
  SetDigitalIO: SetDigitalIO,
  SetAxis: SetAxis,
  ClearErr: ClearErr,
};

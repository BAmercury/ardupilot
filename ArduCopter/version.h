#pragma once

#ifndef FORCE_VERSION_H_INCLUDE
#error version.h should never be included directly. You probably want to include AP_Common/AP_FWVersion.h
#endif

#include "ap_version.h"

#define THISFIRMWARE "ArduCopter V4.0.0-rc2"

// the following line is parsed by the autotest scripts
#define FIRMWARE_VERSION 4,0,0,FIRMWARE_VERSION_TYPE_RC

#define FW_MAJOR 4
#define FW_MINOR 0
#define FW_PATCH 0
#define FW_TYPE FIRMWARE_VERSION_TYPE_RC

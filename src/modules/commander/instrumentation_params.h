#pragma once

#include <px4_platform_common/px4_config.h>
#include <px4_platform_common/param.h>

// global parameter variables declaration
extern uint32_t _ic_guard;
extern uint32_t _ret_c_cycle;
extern int32_t _time_c_cycle;

// parameter handles declaration
extern param_t _ic_guard_h;
extern param_t _ret_c_cycle_h;
extern param_t _time_c_cycle_h;

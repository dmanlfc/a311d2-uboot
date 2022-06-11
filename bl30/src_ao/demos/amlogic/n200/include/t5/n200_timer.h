// See LICENSE file for licence details

#ifndef N200_TIMER_H
#define N200_TIMER_H

  // Need to know the following info from the soc.h, so include soc.h here
  //   SOC_TIMER_CTRL_ADDR      : what is the base address of TIMER in this SoC
  //   SOC_TIMER_FREQ           : what is the frequency for TIMER to count (by rtc_toggle_a signal)
#include "soc.h"

/*
#define TIMER_MSIP 0xFFC
#define TIMER_MSIP_size   0x4
#define TIMER_MTIMECMP 0x8
#define TIMER_MTIMECMP_size 0x8
#define TIMER_MTIME 0x0
#define TIMER_MTIME_size 0x8

#define TIMER_CTRL_ADDR           SOC_TIMER_CTRL_ADDR
#define TIMER_REG(offset)         _REG32(TIMER_CTRL_ADDR, offset)
#define TIMER_FREQ                SOC_TIMER_FREQ
*/

#define TIMER_MSIP 0x0000
#define TIMER_MSIP_size   0x4
#define TIMER_MTIMECMP 0x0020
#define TIMER_MTIMECMP_size 0x8
#define TIMER_MTIME 0x0010
#define TIMER_MTIME_size 0x8

#define TIMER_CTRL_ADDR           SOC_TMR_CTRL_ADDR
#define TIMER_REG(offset)         _REG32(TMR_CTRL_ADDR, offset)
#define TIMER_FREQ   0//SOC_TMR_FREQ


#endif

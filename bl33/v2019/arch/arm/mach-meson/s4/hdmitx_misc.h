/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#ifndef __HDMITX_MISC_H__
#define __HDMITX_MISC_H__

/* miscellaneous definition */

/* REG_BASE:  REGISTER_BASE_ADDR = 0xfe000000 */
#define CLKCTRL_SYS_CLK_EN0_REG2 0x0013
#define P_CLKCTRL_SYS_CLK_EN0_REG2 HHI_REG_ADDR(CLKCTRL_SYS_CLK_EN0_REG2)
#define CLKCTRL_VID_CLK_CTRL 0x0030
#define P_CLKCTRL_VID_CLK_CTRL HHI_REG_ADDR(CLKCTRL_VID_CLK_CTRL)
#define CLKCTRL_VID_CLK_CTRL2 0x0031
#define P_CLKCTRL_VID_CLK_CTRL2 HHI_REG_ADDR(CLKCTRL_VID_CLK_CTRL2)
#define CLKCTRL_VID_CLK_DIV 0x0032
#define P_CLKCTRL_VID_CLK_DIV HHI_REG_ADDR(CLKCTRL_VID_CLK_DIV)
#define CLKCTRL_HDMI_CLK_CTRL 0x0038
#define P_CLKCTRL_HDMI_CLK_CTRL HHI_REG_ADDR(CLKCTRL_HDMI_CLK_CTRL)
#define CLKCTRL_VID_PLL_CLK_DIV 0x0039
#define P_CLKCTRL_VID_PLL_CLK_DIV HHI_REG_ADDR(CLKCTRL_VID_PLL_CLK_DIV)
#define CLKCTRL_HDCP22_CLK_CTRL 0x0040
#define P_CLKCTRL_HDCP22_CLK_CTRL HHI_REG_ADDR(CLKCTRL_HDCP22_CLK_CTRL)

/* REG_BASE:  REGISTER_BASE_ADDR = 0xfe002000 */
#define RESETCTRL_RESET0 0x0000
#define P_RESETCTRL_RESET0 RESETCTRL_REG_ADDR(RESETCTRL_RESET0)
#define RESETCTRL_RESET2 0x0002
#define P_RESETCTRL_RESET2 RESETCTRL_REG_ADDR(RESETCTRL_RESET2)

/* REG_BASE:  REGISTER_BASE_ADDR = 0xfe008000 */
#define ANACTRL_HDMIPLL_CTRL0 0x0070
#define P_ANACTRL_HDMIPLL_CTRL0 ANACTRL_REG_ADDR(ANACTRL_HDMIPLL_CTRL0)
#define ANACTRL_HDMIPLL_CTRL1 0x0071
#define P_ANACTRL_HDMIPLL_CTRL1 ANACTRL_REG_ADDR(ANACTRL_HDMIPLL_CTRL1)
#define ANACTRL_HDMIPLL_CTRL2 0x0072
#define P_ANACTRL_HDMIPLL_CTRL2 ANACTRL_REG_ADDR(ANACTRL_HDMIPLL_CTRL2)
#define ANACTRL_HDMIPLL_CTRL3 0x0073
#define P_ANACTRL_HDMIPLL_CTRL3 ANACTRL_REG_ADDR(ANACTRL_HDMIPLL_CTRL3)
#define ANACTRL_HDMIPLL_CTRL4 0x0074
#define P_ANACTRL_HDMIPLL_CTRL4 ANACTRL_REG_ADDR(ANACTRL_HDMIPLL_CTRL4)
#define ANACTRL_HDMIPLL_CTRL5 0x0075
#define P_ANACTRL_HDMIPLL_CTRL5 ANACTRL_REG_ADDR(ANACTRL_HDMIPLL_CTRL5)
#define ANACTRL_HDMIPLL_CTRL6 0x0076
#define P_ANACTRL_HDMIPLL_CTRL6 ANACTRL_REG_ADDR(ANACTRL_HDMIPLL_CTRL6)
#define ANACTRL_HDMIPLL_STS 0x0077
#define P_ANACTRL_HDMIPLL_STS ANACTRL_REG_ADDR(ANACTRL_HDMIPLL_STS)
#define ANACTRL_HDMIPLL_VLOCK 0x0079
#define P_ANACTRL_HDMIPLL_VLOCK ANACTRL_REG_ADDR(ANACTRL_HDMIPLL_VLOCK)
#define ANACTRL_HDMIPHY_CTRL0 0x0080
#define P_ANACTRL_HDMIPHY_CTRL0 ANACTRL_REG_ADDR(ANACTRL_HDMIPHY_CTRL0)
#define ANACTRL_HDMIPHY_CTRL1 0x0081
#define P_ANACTRL_HDMIPHY_CTRL1 ANACTRL_REG_ADDR(ANACTRL_HDMIPHY_CTRL1)
#define ANACTRL_HDMIPHY_CTRL2 0x0082
#define P_ANACTRL_HDMIPHY_CTRL2 ANACTRL_REG_ADDR(ANACTRL_HDMIPHY_CTRL2)
#define ANACTRL_HDMIPHY_CTRL3 0x0083
#define P_ANACTRL_HDMIPHY_CTRL3 ANACTRL_REG_ADDR(ANACTRL_HDMIPHY_CTRL3)
#define ANACTRL_HDMIPHY_CTRL4 0x0084
#define P_ANACTRL_HDMIPHY_CTRL4 ANACTRL_REG_ADDR(ANACTRL_HDMIPHY_CTRL4)
#define ANACTRL_HDMIPHY_CTRL5 0x0085
#define P_ANACTRL_HDMIPHY_CTRL5 ANACTRL_REG_ADDR(ANACTRL_HDMIPHY_CTRL5)
#define ANACTRL_HDMIPHY_STS 0x0086
#define P_ANACTRL_HDMIPHY_STS ANACTRL_REG_ADDR(ANACTRL_HDMIPHY_STS)

/* REG_BASE:  REGISTER_BASE_ADDR = 0xfe00c000 */
#define PWRCTRL_MEM_PD11 0x001b
#define P_PWRCTRL_MEM_PD11 PWRCTRL_REG_ADDR(PWRCTRL_MEM_PD11)

#endif

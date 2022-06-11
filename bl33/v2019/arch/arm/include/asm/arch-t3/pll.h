/*
* Copyright (C) 2017 Amlogic, Inc. All rights reserved.
* *
This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
* *
This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
* *
You should have received a copy of the GNU General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
* *
Description:
*/


#ifndef __PLL_H
#define __PLL_H

#define PLL_TEST_SYS_TOTAL		2
#define PLL_TEST_HIFI_TOTAL		2
#define PLL_TEST_GP0_TOTAL		2
#define PLL_TEST_GP1_TOTAL		2
#define PLL_TEST_HDMI_TOTAL		2

typedef struct sys_pll_set_s {
	unsigned int cpu_clk;
	unsigned int pll_cntl;
	unsigned int pll_cntl1;
	unsigned int pll_cntl2;
	unsigned int pll_cntl3;
	unsigned int pll_cntl4;
	unsigned int pll_cntl5;
	unsigned int pll_cntl6;
}sys_pll_set_t;

typedef struct sys_pll_cfg_s {
	sys_pll_set_t sys_pll[PLL_TEST_SYS_TOTAL];
}sys_pll_cfg_t;

typedef struct hdmi_pll_set_s {
	unsigned int pll_clk;
	unsigned int pll_cntl0;
	unsigned int pll_cntl1;
	unsigned int pll_cntl2;
	unsigned int pll_cntl3;
	unsigned int pll_cntl4;
	unsigned int pll_cntl5;
	unsigned int pll_cntl6;
}hdmi_pll_set_t;

typedef struct hdmi_pll_cfg_s {
	hdmi_pll_set_t hdmi_pll[PLL_TEST_HDMI_TOTAL];
}hdmi_pll_cfg_t;

typedef struct gpll_rate_table_s {
	unsigned int rate;
	unsigned int m;
	unsigned int n;
	unsigned int od;
}gpll_rate_table_t;

typedef struct hifipll_rate_table_s {
	unsigned int rate;
	unsigned int m;
	unsigned int n;
	unsigned int od;
}hifipll_rate_table_t;

typedef struct gp0_pll_set_s {
	unsigned int pll_clk;
	unsigned int pll_cntl0;
	unsigned int pll_cntl1;
	unsigned int pll_cntl2;
	unsigned int pll_cntl3;
	unsigned int pll_cntl4;
	unsigned int pll_cntl5;
	unsigned int pll_cntl6;
}gp0_pll_set_t;

typedef struct gp0_pll_cfg_s {
	gp0_pll_set_t gp0_pll[PLL_TEST_GP0_TOTAL];
}gp0_pll_cfg_t;

typedef struct gp1_pll_set_s {
	unsigned int pll_clk;
	unsigned int pll_cntl0;
	unsigned int pll_cntl1;
	unsigned int pll_cntl2;
	unsigned int pll_cntl3;
	unsigned int pll_cntl4;
	unsigned int pll_cntl5;
	unsigned int pll_cntl6;
}gp1_pll_set_t;

typedef struct gp1_pll_cfg_s {
	gp1_pll_set_t gp1_pll[PLL_TEST_GP1_TOTAL];
}gp1_pll_cfg_t;

typedef struct hifi_pll_set_s {
	unsigned int pll_clk;
	unsigned int pll_cntl0;
	unsigned int pll_cntl1;
	unsigned int pll_cntl2;
	unsigned int pll_cntl3;
	unsigned int pll_cntl4;
	unsigned int pll_cntl5;
	unsigned int pll_cntl6;
}hifi_pll_set_t;

typedef struct hifi_pll_cfg_s {
	hifi_pll_set_t hifi_pll[PLL_TEST_HIFI_TOTAL];
}hifi_pll_cfg_t;

typedef struct pcie_pll_set_s {
	unsigned int pll_clk;
	unsigned int pll_cntl0;
	unsigned int pll_cntl1;
	unsigned int pll_cntl2;
	unsigned int pll_cntl3;
	unsigned int pll_cntl4;
	unsigned int pll_cntl5;
}pcie_pll_set_t;

typedef struct ethphy_pll_set_s {
	unsigned int pll_clk;
	unsigned int pll_cntl0;
	unsigned int pll_cntl1;
	unsigned int pll_cntl2;
	unsigned int pll_cntl3;
}ethphy_pll_set_t;

typedef struct usbphy_pll_set_s {
	unsigned int pll_clk;
	unsigned int pll_cntl0;
	unsigned int pll_cntl1;
	unsigned int pll_cntl2;
	unsigned int pll_cntl3;
	unsigned int pll_cntl4;
	unsigned int pll_cntl5;
	unsigned int pll_cntl6;
	unsigned int pll_cntl7;
}usbphy_pll_set_t;

struct pciepll_rate_table {
	u16		rate;
	u16		m;
	u16		n;
	u16		od;
	u16		od2;
	u16		frac;
};

#define PLL_RATE(_r, _m, _n, _od)					\
	{								\
		.rate		= (_r),					\
		.m		= (_m),					\
		.n		= (_n),					\
		.od		= (_od),				\
	}								\

enum pll_enum {
	PLL_SYS = 0,
	PLL_FIX,
	PLL_DDR,
	PLL_HDMI,
	PLL_GP0,
	PLL_HIFI,
	PLL_PCIE,
	PLL_GP1,
	PLL_USBPHY,
	PLL_ENUM,

};

int pll_test(int argc, char * const argv[]);

#endif /* __PLL_H */

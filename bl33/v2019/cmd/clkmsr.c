// SPDX-License-Identifier: (GPL-2.0+ OR MIT)
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#include <common.h>
#include <command.h>
#include <asm/arch/clock.h>

extern int clk_msr(int index);

static int do_clkmsr(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	int index = 0xff;

	if (argc ==  2)
		index = simple_strtoul(argv[1], NULL, 10);

	clk_msr(index);

	return 0;
}

U_BOOT_CMD(
		clkmsr, 2, 1, do_clkmsr,
		"Amlogic measure clock",
		"	- measure PLL clock.\n"
		"\n"
		"clkmsr [index]"
		"\n"
);

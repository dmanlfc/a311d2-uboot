/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2008,2010 Freescale Semiconductor, Inc
 * Andy Fleming
 *
 * Based (loosely) on the Linux code
 */

#ifndef _MMC_PRIVATE_H_
#define _MMC_PRIVATE_H_

#include <clk.h>
#include <mmc.h>

#define SAMSUNG_MID			0x15
#define KINGSTON_MID		0x70
#define BIWIN_MID			0xf4
#define SAMSUNG_FFU_ADDR	0xc7810000
#define KINGSTON_FFU_ADDR	0x0000ffff
#define BIWIN_FFU_ADDR		0x0
#define MAX_TUNING_RETRY	(4)
#define CALI_BLK_CNT		(1024)
#define REFIX_BLK_CNT		(100)
#define CALI_PATTERN_ADDR   (0x13800)
#define TUNING_NUM_PER_POINT 40
#define MMC_MAX_DESC_NUM	512
#define MAX_RESPONSE_BYTES	4

/* unknown */
#define CARD_TYPE_UNKNOWN       0
/* MMC card */
#define CARD_TYPE_MMC           1
/* SD card */
#define CARD_TYPE_SD            2
/* SDIO card */
#define CARD_TYPE_SDIO          3
/* SD combo (IO+mem) card */
#define CARD_TYPE_SD_COMBO      4
/* NON sdio device (means SD/MMC card) */
#define CARD_TYPE_NON_SDIO      5

#define aml_card_type_unknown(c)    ((c)->card_type == CARD_TYPE_UNKNOWN)
#define aml_card_type_mmc(c)        ((c)->card_type == CARD_TYPE_MMC)
#define aml_card_type_sd(c)      ((c)->card_type == CARD_TYPE_SD)
#define aml_card_type_sdio(c)      ((c)->card_type == CARD_TYPE_SDIO)
#define aml_card_type_non_sdio(c)   ((c)->card_type == CARD_TYPE_NON_SDIO)

struct meson_host {
	struct mmc *mmc;
	uint is_in;
	uint is_sduart;
	uint is_tuning;
	uint card_type;
	uint src_clk;
	struct clk core;
	struct clk xtal;
	struct clk div2;
	struct clk mux;
	struct clk div;
	struct clk gate;
	struct gpio_desc gpio_cd;
	struct gpio_desc gpio_reset;
	char *blk_test;
	char* desc_buf;
};

struct meson_mmc_platdata {
	struct mmc_config cfg;
	struct mmc mmc;
	void *regbase;
	void *w_buf;
};

extern int mmc_send_cmd(struct mmc *mmc, struct mmc_cmd *cmd,
			struct mmc_data *data);
extern int mmc_send_status(struct mmc *mmc, int timeout);
extern int mmc_set_blocklen(struct mmc *mmc, int len);
#ifdef CONFIG_FSL_ESDHC_ADAPTER_IDENT
void mmc_adapter_card_type_ident(void);
#endif

#if CONFIG_IS_ENABLED(BLK)
ulong mmc_bread(struct udevice *dev, lbaint_t start, lbaint_t blkcnt,
		void *dst);
#else
ulong mmc_bread(struct blk_desc *block_dev, lbaint_t start, lbaint_t blkcnt,
		void *dst);
#endif

#if CONFIG_IS_ENABLED(MMC_WRITE)

#if CONFIG_IS_ENABLED(BLK)
ulong mmc_bwrite(struct udevice *dev, lbaint_t start, lbaint_t blkcnt,
		 const void *src);
ulong mmc_berase(struct udevice *dev, lbaint_t start, lbaint_t blkcnt);
#else
ulong mmc_bwrite(struct blk_desc *block_dev, lbaint_t start, lbaint_t blkcnt,
		 const void *src);
ulong mmc_berase(struct blk_desc *block_dev, lbaint_t start, lbaint_t blkcnt);
#endif

#else /* CONFIG_SPL_MMC_WRITE is not defined */

/* declare dummies to reduce code size. */

#if CONFIG_IS_ENABLED(BLK)
static inline unsigned long mmc_berase(struct udevice *dev,
				       lbaint_t start, lbaint_t blkcnt)
{
	return 0;
}

static inline ulong mmc_bwrite(struct udevice *dev, lbaint_t start,
			       lbaint_t blkcnt, const void *src)
{
	return 0;
}
#else
static inline unsigned long mmc_berase(struct blk_desc *block_dev,
				       lbaint_t start, lbaint_t blkcnt)
{
	return 0;
}

static inline ulong mmc_bwrite(struct blk_desc *block_dev, lbaint_t start,
			       lbaint_t blkcnt, const void *src)
{
	return 0;
}
#endif

#endif /* CONFIG_SPL_BUILD */

#ifdef CONFIG_MMC_TRACE
void mmmc_trace_before_send(struct mmc *mmc, struct mmc_cmd *cmd);
void mmmc_trace_after_send(struct mmc *mmc, struct mmc_cmd *cmd, int ret);
void mmc_trace_state(struct mmc *mmc, struct mmc_cmd *cmd);
#else
static inline void mmmc_trace_before_send(struct mmc *mmc, struct mmc_cmd *cmd)
{
}

static inline void mmmc_trace_after_send(struct mmc *mmc, struct mmc_cmd *cmd,
					 int ret)
{
}

static inline void mmc_trace_state(struct mmc *mmc, struct mmc_cmd *cmd)
{
}
#endif

/**
 * mmc_get_next_devnum() - Get the next available MMC device number
 *
 * @return next available device number (0 = first), or -ve on error
 */
int mmc_get_next_devnum(void);

/**
 * mmc_do_preinit() - Get an MMC device ready for use
 */
void mmc_do_preinit(void);

/**
 * mmc_list_init() - Set up the list of MMC devices
 */
void mmc_list_init(void);

/**
 * mmc_list_add() - Add a new MMC device to the list of devices
 *
 * @mmc:	Device to add
 */
void mmc_list_add(struct mmc *mmc);

/**
 * mmc_switch_part() - Switch to a new MMC hardware partition
 *
 * @mmc:	MMC device
 * @part_num:	Hardware partition number
 * @return 0 if OK, -ve on error
 */
int mmc_switch_part(struct mmc *mmc, unsigned int part_num);

/**
 * mmc_switch() - Issue and MMC switch mode command
 *
 * @mmc:	MMC device
 * @set:	Unused
 * @index:	Cmdarg index
 * @value:	Cmdarg value
 * @return 0 if OK, -ve on error
 */
int mmc_switch(struct mmc *mmc, u8 set, u8 index, u8 value);

int emmc_boot_chk(struct mmc *mmc);
#endif /* _MMC_PRIVATE_H_ */
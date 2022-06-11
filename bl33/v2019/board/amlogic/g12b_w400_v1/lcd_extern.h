/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#ifndef _DFT_LCD_EXTERN_H_
#define _DFT_LCD_EXTERN_H_

#define LCD_EXT_I2C_GPIO_SCK    0xff /* 0xff for invalid */
#define LCD_EXT_I2C_GPIO_SDA    0xff /* 0xff for invalid */
#define LCD_EXT_SPI_GPIO_CS     0xff /* 0xff for invalid */
#define LCD_EXT_SPI_GPIO_CLK    0xff /* 0xff for invalid */
#define LCD_EXT_SPI_GPIO_DATA   0xff /* 0xff for invalid */
#define LCD_EXT_PINMUX_GPIO_OFF 0

static char lcd_ext_gpio[LCD_EXTERN_GPIO_NUM_MAX][LCD_EXTERN_GPIO_LEN_MAX] = {
	"invalid", /* ending flag */
};

static struct lcd_pinmux_ctrl_s lcd_ext_pinmux_ctrl[LCD_PINMX_MAX] = {
	{
		.name = "invalid",
	},
};

static unsigned char ext_init_on_table[LCD_EXTERN_INIT_ON_MAX] = {
	0xff, 0,   //ending flag
};

static unsigned char ext_init_off_table[LCD_EXTERN_INIT_OFF_MAX] = {
	0xff, 0,   //ending flag
};

static unsigned char ext_init_on_table_P070ACB_FT[LCD_EXTERN_INIT_ON_MAX] = {
	0x23,2,0xE0,0x00,//Page 0
	0x23,2,0xE1,0x93,// PASSWORD
	0x23,2,0xE2,0x65,
	0x23,2,0xE3,0xF8,
	0x23,2,0x80,0x03,
	0x23,2,0xE0,0x01,//Page 01
	0x23,2,0x0C,0x74,//Set PWRIC
	0x23,2,0x17,0x00,//Set Gamma Power
	0x23,2,0x18,0xEF,//VGMP=5.1V
	0x23,2,0x19,0x00,
	0x23,2,0x1A,0x00,
	0x23,2,0x1B,0xEF,//VGMN=-5.1V
	0x23,2,0x1C,0x00,
	0x23,2,0x1F,0x70,//Set Gate Power
	0x23,2,0x20,0x2D,
	0x23,2,0x21,0x2D,
	0x23,2,0x22,0x7E,
	0x23,2,0x26,0xF3,//VDDD from IOVCC
	0x23,2,0x37,0x09,//SetPanel
	0x23,2,0x38,0x04,//SET RGBCYC
	0x23,2,0x39,0x00,
	0x23,2,0x3A,0x01,
	0x23,2,0x3C,0x90,
	0x23,2,0x3D,0xFF,
	0x23,2,0x3E,0xFF,
	0x23,2,0x3F,0xFF,
	0x23,2,0x40,0x02,//Set TCON
	0x23,2,0x41,0x80,
	0x23,2,0x42,0x99,
	0x23,2,0x43,0x14,
	0x23,2,0x44,0x19,
	0x23,2,0x45,0x5A,
	0x23,2,0x4B,0x04,
	0x23,2,0x55,0x02,//power voltage
	0x23,2,0x56,0x01,
	0x23,2,0x57,0x69,
	0x23,2,0x58,0x0A,
	0x23,2,0x59,0x0A,
	0x23,2,0x5A,0x2E,//VGH = 16.2V
	0x23,2,0x5B,0x19,//VGL = -12V
	0x23,2,0x5C,0x15,
	0x23,2,0x5D,0x77,//Gamma
	0x23,2,0x5E,0x56,
	0x23,2,0x5F,0x45,
	0x23,2,0x60,0x38,
	0x23,2,0x61,0x35,
	0x23,2,0x62,0x27,
	0x23,2,0x63,0x2D,
	0x23,2,0x64,0x18,
	0x23,2,0x65,0x33,
	0x23,2,0x66,0x34,
	0x23,2,0x67,0x35,
	0x23,2,0x68,0x56,
	0x23,2,0x69,0x45,
	0x23,2,0x6A,0x4F,
	0x23,2,0x6B,0x42,
	0x23,2,0x6C,0x40,
	0x23,2,0x6D,0x34,
	0x23,2,0x6E,0x25,
	0x23,2,0x6F,0x02,
	0x23,2,0x70,0x77,
	0x23,2,0x71,0x56,
	0x23,2,0x72,0x45,
	0x23,2,0x73,0x38,
	0x23,2,0x74,0x35,
	0x23,2,0x75,0x27,
	0x23,2,0x76,0x2D,
	0x23,2,0x77,0x18,
	0x23,2,0x78,0x33,
	0x23,2,0x79,0x34,
	0x23,2,0x7A,0x35,
	0x23,2,0x7B,0x56,
	0x23,2,0x7C,0x45,
	0x23,2,0x7D,0x4F,
	0x23,2,0x7E,0x42,
	0x23,2,0x7F,0x40,
	0x23,2,0x80,0x34,
	0x23,2,0x81,0x25,
	0x23,2,0x82,0x02,
	0x23,2,0xE0,0x02,//Page2
	0x23,2,0x00,0x53,//GIP_L Pin mapping RESET_EVEN
	0x23,2,0x01,0x55,//VSSG_EVEN
	0x23,2,0x02,0x55,//VSSA_EVEN
	0x23,2,0x03,0x51,//STV2_EVEN
	0x23,2,0x04,0x77,//VDD2_EVEN
	0x23,2,0x05,0x57,//VDD1_EVEN
	0x23,2,0x06,0x1F,
	0x23,2,0x07,0x4F,     //CK12
	0x23,2,0x08,0x4D,      //CK10
	0x23,2,0x09,0x1F,
	0x23,2,0x0A,0x4B,     //CK8
	0x23,2,0x0B,0x49,     //CK6
	0x23,2,0x0C,0x1F,
	0x23,2,0x0D,0x47,       //CK4
	0x23,2,0x0E,0x45,       //CK2
	0x23,2,0x0F,0x41, //STV1_EVEN
	0x23,2,0x10,0x1F,
	0x23,2,0x11,0x1F,
	0x23,2,0x12,0x1F,
	0x23,2,0x13,0x55,      //VGG
	0x23,2,0x14,0x1F,
	0x23,2,0x15,0x1F,
	0x23,2,0x16,0x52,//GIP_R Pin mapping RESET_ODD
	0x23,2,0x17,0x55, //VSSG_ODD
	0x23,2,0x18,0x55, //VSSA_ODD
	0x23,2,0x19,0x50, //STV2_ODD
	0x23,2,0x1A,0x77,//VDD2_ODD
	0x23,2,0x1B,0x57,//VDD1_ODD
	0x23,2,0x1C,0x1F,
	0x23,2,0x1D,0x4E,     //CK11
	0x23,2,0x1E,0x4C,      //CK9
	0x23,2,0x1F,0x1F,
	0x23,2,0x20,0x4A,      //CK7
	0x23,2,0x21,0x48,      //CK5
	0x23,2,0x22,0x1F,
	0x23,2,0x23,0x46,     //CK3
	0x23,2,0x24,0x44,      //CK1
	0x23,2,0x25,0x40,//STV1_ODD
	0x23,2,0x26,0x1F,
	0x23,2,0x27,0x1F,
	0x23,2,0x28,0x1F,
	0x23,2,0x29,0x1F,
	0x23,2,0x2A,0x1F,
	0x23,2,0x2B,0x55,      //VGG
	0x23,2,0x2C,0x12,//GIP_L_GS Pin mapping
	0x23,2,0x2D,0x15,
	0x23,2,0x2E,0x15,
	0x23,2,0x2F,0x00,
	0x23,2,0x30,0x37,
	0x23,2,0x31,0x17,
	0x23,2,0x32,0x1F,
	0x23,2,0x33,0x08,
	0x23,2,0x34,0x0A,
	0x23,2,0x35,0x1F,
	0x23,2,0x36,0x0C,
	0x23,2,0x37,0x0E,
	0x23,2,0x38,0x1F,
	0x23,2,0x39,0x04,
	0x23,2,0x3A,0x06,
	0x23,2,0x3B,0x10,
	0x23,2,0x3C,0x1F,
	0x23,2,0x3D,0x1F,
	0x23,2,0x3E,0x1F,
	0x23,2,0x3F,0x15,
	0x23,2,0x40,0x1F,
	0x23,2,0x41,0x1F,
	0x23,2,0x42,0x13,//GIP_R_GS Pin mapping
	0x23,2,0x43,0x15,
	0x23,2,0x44,0x15,
	0x23,2,0x45,0x01,
	0x23,2,0x46,0x37,
	0x23,2,0x47,0x17,
	0x23,2,0x48,0x1F,
	0x23,2,0x49,0x09,
	0x23,2,0x4A,0x0B,
	0x23,2,0x4B,0x1F,
	0x23,2,0x4C,0x0D,
	0x23,2,0x4D,0x0F,
	0x23,2,0x4E,0x1F,
	0x23,2,0x4F,0x05,
	0x23,2,0x50,0x07,
	0x23,2,0x51,0x11,
	0x23,2,0x52,0x1F,
	0x23,2,0x53,0x1F,
	0x23,2,0x54,0x1F,
	0x23,2,0x55,0x1F,
	0x23,2,0x56,0x1F,
	0x23,2,0x57,0x15,
	0x23,2,0x58,0x40,//GIP Timing
	0x23,2,0x59,0x00,
	0x23,2,0x5A,0x00,
	0x23,2,0x5B,0x10,
	0x23,2,0x5C,0x14,
	0x23,2,0x5D,0x40,
	0x23,2,0x5E,0x01,
	0x23,2,0x5F,0x02,
	0x23,2,0x60,0x40,
	0x23,2,0x61,0x03,
	0x23,2,0x62,0x04,
	0x23,2,0x63,0x7A,
	0x23,2,0x64,0x7A,
	0x23,2,0x65,0x74,
	0x23,2,0x66,0x16,
	0x23,2,0x67,0xB4,
	0x23,2,0x68,0x16,
	0x23,2,0x69,0x7A,
	0x23,2,0x6A,0x7A,
	0x23,2,0x6B,0x0C,
	0x23,2,0x6C,0x00,
	0x23,2,0x6D,0x04,
	0x23,2,0x6E,0x04,
	0x23,2,0x6F,0x88,
	0x23,2,0x70,0x00,
	0x23,2,0x71,0x00,
	0x23,2,0x72,0x06,
	0x23,2,0x73,0x7B,
	0x23,2,0x74,0x00,
	0x23,2,0x75,0xBC,
	0x23,2,0x76,0x00,
	0x23,2,0x77,0x04,
	0x23,2,0x78,0x2C,
	0x23,2,0x79,0x00,
	0x23,2,0x7A,0x00,
	0x23,2,0x7B,0x00,
	0x23,2,0x7C,0x00,
	0x23,2,0x7D,0x03,
	0x23,2,0x7E,0x7B,
	0x23,2,0xE0,0x04,//Page4
	0x23,2,0x09,0x11,//Set RGBCYC2
	0x23,2,0x0E,0x48,
	0x23,2,0x2B,0x2B,//ESD Protect
	0x23,2,0x2E,0x44,
	0x23,2,0xE0,0x00,//Page0
	0x23,2,0xE6,0x02,//Watch dog
	0x23,2,0xE7,0x0C,
	0x05,1,0x11,//sleep out
	0xfd, 1,120,
	0x05,1,0x29,//display on
	0x05,1,0x35,
	0xfd, 1, 20,   /* delay(ms) */
	0xFF, 0,   /* ending flag */
};

static unsigned char ext_init_off_table_P070ACB_FT[LCD_EXTERN_INIT_OFF_MAX] = {
	0x05, 1, 0x28, /* display off */
	0xfd, 1, 10,   /* delay 10ms */
	0x05, 1, 0x10, /* sleep in */
	0xfd, 1, 150,  /* delay 150ms */
	0xFF, 0,   /* ending flag */
};

static unsigned char ext_init_on_table_TL050FHV02CT[LCD_EXTERN_INIT_ON_MAX] = {
	//LCD driver initialization
	0x23, 2, 0XFF, 0X05,
	0x23, 2, 0XFB, 0X01,
	0x23, 2, 0XC5, 0X01, //TURN ON
	0xfd, 1, 100,

	//AUO4.97+NT35596_intial
	0x23, 2, 0XFF, 0XEE, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X1F, 0X45,
	0x23, 2, 0X24, 0X4F,
	0x23, 2, 0X38, 0XC8,
	0x23, 2, 0X39, 0X2C,
	0x23, 2, 0X1E, 0XBB,
	0x23, 2, 0X1D, 0X0F,
	0x23, 2, 0X7E, 0XB1,

	0x23, 2, 0XFF, 0X00, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X35, 0X01,

	0x23, 2, 0XFF, 0X01, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X00, 0X01,
	0x23, 2, 0X01, 0X55,
	0x23, 2, 0X02, 0X40,
	0x23, 2, 0X05, 0X40,
	0x23, 2, 0X06, 0X4A,
	0x23, 2, 0X07, 0X24,
	0x23, 2, 0X08, 0X0C,
	0x23, 2, 0X0B, 0X87,
	0x23, 2, 0X0C, 0X87,
	0x23, 2, 0X0E, 0XB0,
	0x23, 2, 0X0F, 0XB3,
	0x23, 2, 0X11, 0X10,
	0x23, 2, 0X12, 0X10,
	0x23, 2, 0X13, 0X05,
	0x23, 2, 0X14, 0X4A,
	0x23, 2, 0X15, 0X18,
	0x23, 2, 0X16, 0X18,
	0x23, 2, 0X18, 0X00,
	0x23, 2, 0X19, 0X77,
	0x23, 2, 0X1A, 0X55,
	0x23, 2, 0X1B, 0X13,
	0x23, 2, 0X1C, 0X00,
	0x23, 2, 0X1D, 0X00,
	0x23, 2, 0X1E, 0X13,
	0x23, 2, 0X1F, 0X00,
	0x23, 2, 0X23, 0X00,
	0x23, 2, 0X24, 0X00,
	0x23, 2, 0X25, 0X00,
	0x23, 2, 0X26, 0X00,
	0x23, 2, 0X27, 0X00,
	0x23, 2, 0X28, 0X00,
	0x23, 2, 0X35, 0X00,
	0x23, 2, 0X66, 0X00,
	0x23, 2, 0X58, 0X82,
	0x23, 2, 0X59, 0X02,
	0x23, 2, 0X5A, 0X02,
	0x23, 2, 0X5B, 0X02,
	0x23, 2, 0X5C, 0X82,
	0x23, 2, 0X5D, 0X82,
	0x23, 2, 0X5E, 0X02,
	0x23, 2, 0X5F, 0X02,
	0x23, 2, 0X72, 0X31,

	0x23, 2, 0XFF, 0X05, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X00, 0X01,
	0x23, 2, 0X01, 0X0B,
	0x23, 2, 0X02, 0X0C,
	0x23, 2, 0X03, 0X09,
	0x23, 2, 0X04, 0X0A,
	0x23, 2, 0X05, 0X00,
	0x23, 2, 0X06, 0X0F,
	0x23, 2, 0X07, 0X10,
	0x23, 2, 0X08, 0X00,
	0x23, 2, 0X09, 0X00,
	0x23, 2, 0X0A, 0X00,
	0x23, 2, 0X0B, 0X00,
	0x23, 2, 0X0C, 0X00,
	0x23, 2, 0X0D, 0X13,
	0x23, 2, 0X0E, 0X15,
	0x23, 2, 0X0F, 0X17,
	0x23, 2, 0X10, 0X01,
	0x23, 2, 0X11, 0X0B,
	0x23, 2, 0X12, 0X0C,
	0x23, 2, 0X13, 0X09,
	0x23, 2, 0X14, 0X0A,
	0x23, 2, 0X15, 0X00,
	0x23, 2, 0X16, 0X0F,
	0x23, 2, 0X17, 0X10,
	0x23, 2, 0X18, 0X00,
	0x23, 2, 0X19, 0X00,
	0x23, 2, 0X1A, 0X00,
	0x23, 2, 0X1B, 0X00,
	0x23, 2, 0X1C, 0X00,
	0x23, 2, 0X1D, 0X13,
	0x23, 2, 0X1E, 0X15,
	0x23, 2, 0X1F, 0X17,
	0x23, 2, 0X20, 0X00,
	0x23, 2, 0X21, 0X03,
	0x23, 2, 0X22, 0X01,
	0x23, 2, 0X23, 0X40,
	0x23, 2, 0X24, 0X40,
	0x23, 2, 0X25, 0XED,
	0x23, 2, 0X29, 0X58,
	0x23, 2, 0X2A, 0X12,
	0x23, 2, 0X2B, 0X01,
	0x23, 2, 0X4B, 0X06,
	0x23, 2, 0X4C, 0X11,
	0x23, 2, 0X4D, 0X20,
	0x23, 2, 0X4E, 0X02,
	0x23, 2, 0X4F, 0X02,
	0x23, 2, 0X50, 0X20,
	0x23, 2, 0X51, 0X61,
	0x23, 2, 0X52, 0X01,
	0x23, 2, 0X53, 0X63,
	0x23, 2, 0X54, 0X77,
	0x23, 2, 0X55, 0XED,
	0x23, 2, 0X5B, 0X00,
	0x23, 2, 0X5C, 0X00,
	0x23, 2, 0X5D, 0X00,
	0x23, 2, 0X5E, 0X00,
	0x23, 2, 0X5F, 0X15,
	0x23, 2, 0X60, 0X75,
	0x23, 2, 0X61, 0X00,
	0x23, 2, 0X62, 0X00,
	0x23, 2, 0X63, 0X00,
	0x23, 2, 0X64, 0X00,
	0x23, 2, 0X65, 0X00,
	0x23, 2, 0X66, 0X00,
	0x23, 2, 0X67, 0X00,
	0x23, 2, 0X68, 0X04,
	0x23, 2, 0X69, 0X00,
	0x23, 2, 0X6A, 0X00,
	0x23, 2, 0X6C, 0X40,
	0x23, 2, 0X75, 0X01,
	0x23, 2, 0X76, 0X01,
	0x23, 2, 0X7A, 0X80,
	0x23, 2, 0X7B, 0XC5,
	0x23, 2, 0X7C, 0XD8,
	0x23, 2, 0X7D, 0X60,
	0x23, 2, 0X7F, 0X15,
	0x23, 2, 0X80, 0X81,
	0x23, 2, 0X83, 0X05,
	0x23, 2, 0X93, 0X08,
	0x23, 2, 0X94, 0X10,
	0x23, 2, 0X8A, 0X00,
	0x23, 2, 0X9B, 0X0F,
	0x23, 2, 0XEA, 0XFF,
	0x23, 2, 0XEC, 0X00,

	0x23, 2, 0XFF, 0X01, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X75, 0X00, //Gamma R+
	0x23, 2, 0X76, 0X18,
	0x23, 2, 0X77, 0X00,
	0x23, 2, 0X78, 0X38,
	0x23, 2, 0X79, 0X00,
	0x23, 2, 0X7A, 0X65,
	0x23, 2, 0X7B, 0X00,
	0x23, 2, 0X7C, 0X84,
	0x23, 2, 0X7D, 0X00,
	0x23, 2, 0X7E, 0X9B,
	0x23, 2, 0X7F, 0X00,
	0x23, 2, 0X80, 0XAF,
	0x23, 2, 0X81, 0X00,
	0x23, 2, 0X82, 0XC1,
	0x23, 2, 0X83, 0X00,
	0x23, 2, 0X84, 0XD2,
	0x23, 2, 0X85, 0X00,
	0x23, 2, 0X86, 0XDF,
	0x23, 2, 0X87, 0X01,
	0x23, 2, 0X88, 0X11,
	0x23, 2, 0X89, 0X01,
	0x23, 2, 0X8A, 0X38,
	0x23, 2, 0X8B, 0X01,
	0x23, 2, 0X8C, 0X76,
	0x23, 2, 0X8D, 0X01,
	0x23, 2, 0X8E, 0XA7,
	0x23, 2, 0X8F, 0X01,
	0x23, 2, 0X90, 0XF3,
	0x23, 2, 0X91, 0X02,
	0x23, 2, 0X92, 0X2F,
	0x23, 2, 0X93, 0X02,
	0x23, 2, 0X94, 0X30,
	0x23, 2, 0X95, 0X02,
	0x23, 2, 0X96, 0X66,
	0x23, 2, 0X97, 0X02,
	0x23, 2, 0X98, 0XA0,
	0x23, 2, 0X99, 0X02,
	0x23, 2, 0X9A, 0XC5,
	0x23, 2, 0X9B, 0X02,
	0x23, 2, 0X9C, 0XF8,
	0x23, 2, 0X9D, 0X03,
	0x23, 2, 0X9E, 0X1B,
	0x23, 2, 0X9F, 0X03,
	0x23, 2, 0XA0, 0X46,
	0x23, 2, 0XA2, 0X03,
	0x23, 2, 0XA3, 0X52,
	0x23, 2, 0XA4, 0X03,
	0x23, 2, 0XA5, 0X62,
	0x23, 2, 0XA6, 0X03,
	0x23, 2, 0XA7, 0X71,
	0x23, 2, 0XA9, 0X03,
	0x23, 2, 0XAA, 0X83,
	0x23, 2, 0XAB, 0X03,
	0x23, 2, 0XAC, 0X94,
	0x23, 2, 0XAD, 0X03,
	0x23, 2, 0XAE, 0XA3,
	0x23, 2, 0XAF, 0X03,
	0x23, 2, 0XB0, 0XAD,
	0x23, 2, 0XB1, 0X03,
	0x23, 2, 0XB2, 0XCC,

	0x23, 2, 0XB3, 0X00, //Gamma R-
	0x23, 2, 0XB4, 0X18,
	0x23, 2, 0XB5, 0X00,
	0x23, 2, 0XB6, 0X38,
	0x23, 2, 0XB7, 0X00,
	0x23, 2, 0XB8, 0X65,
	0x23, 2, 0XB9, 0X00,
	0x23, 2, 0XBA, 0X84,
	0x23, 2, 0XBB, 0X00,
	0x23, 2, 0XBC, 0X9B,
	0x23, 2, 0XBD, 0X00,
	0x23, 2, 0XBE, 0XAF,
	0x23, 2, 0XBF, 0X00,
	0x23, 2, 0XC0, 0XC1,
	0x23, 2, 0XC1, 0X00,
	0x23, 2, 0XC2, 0XD2,
	0x23, 2, 0XC3, 0X00,
	0x23, 2, 0XC4, 0XDF,
	0x23, 2, 0XC5, 0X01,
	0x23, 2, 0XC6, 0X11,
	0x23, 2, 0XC7, 0X01,
	0x23, 2, 0XC8, 0X38,
	0x23, 2, 0XC9, 0X01,
	0x23, 2, 0XCA, 0X76,
	0x23, 2, 0XCB, 0X01,
	0x23, 2, 0XCC, 0XA7,
	0x23, 2, 0XCD, 0X01,
	0x23, 2, 0XCE, 0XF3,
	0x23, 2, 0XCF, 0X02,
	0x23, 2, 0XD0, 0X2F,
	0x23, 2, 0XD1, 0X02,
	0x23, 2, 0XD2, 0X30,
	0x23, 2, 0XD3, 0X02,
	0x23, 2, 0XD4, 0X66,
	0x23, 2, 0XD5, 0X02,
	0x23, 2, 0XD6, 0XA0,
	0x23, 2, 0XD7, 0X02,
	0x23, 2, 0XD8, 0XC5,
	0x23, 2, 0XD9, 0X02,
	0x23, 2, 0XDA, 0XF8,
	0x23, 2, 0XDB, 0X03,
	0x23, 2, 0XDC, 0X1B,
	0x23, 2, 0XDD, 0X03,
	0x23, 2, 0XDE, 0X46,
	0x23, 2, 0XDF, 0X03,
	0x23, 2, 0XE0, 0X52,
	0x23, 2, 0XE1, 0X03,
	0x23, 2, 0XE2, 0X62,
	0x23, 2, 0XE3, 0X03,
	0x23, 2, 0XE4, 0X71,
	0x23, 2, 0XE5, 0X03,
	0x23, 2, 0XE6, 0X83,
	0x23, 2, 0XE7, 0X03,
	0x23, 2, 0XE8, 0X94,
	0x23, 2, 0XE9, 0X03,
	0x23, 2, 0XEA, 0XA3,
	0x23, 2, 0XEB, 0X03,
	0x23, 2, 0XEC, 0XAD,
	0x23, 2, 0XED, 0X03,
	0x23, 2, 0XEE, 0XCC,

	0x23, 2, 0XEF, 0X00, //Gamma G+
	0x23, 2, 0XF0, 0X18,
	0x23, 2, 0XF1, 0X00,
	0x23, 2, 0XF2, 0X38,
	0x23, 2, 0XF3, 0X00,
	0x23, 2, 0XF4, 0X65,
	0x23, 2, 0XF5, 0X00,
	0x23, 2, 0XF6, 0X84,
	0x23, 2, 0XF7, 0X00,
	0x23, 2, 0XF8, 0X9B,
	0x23, 2, 0XF9, 0X00,
	0x23, 2, 0XFA, 0XAF,
	0x23, 2, 0XFF, 0X02, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0X00, 0X00,
	0x23, 2, 0X01, 0XC1,
	0x23, 2, 0X02, 0X00,
	0x23, 2, 0X03, 0XD2,
	0x23, 2, 0X04, 0X00,
	0x23, 2, 0X05, 0XDF,
	0x23, 2, 0X06, 0X01,
	0x23, 2, 0X07, 0X11,
	0x23, 2, 0X08, 0X01,
	0x23, 2, 0X09, 0X38,
	0x23, 2, 0X0A, 0X01,
	0x23, 2, 0X0B, 0X76,
	0x23, 2, 0X0C, 0X01,
	0x23, 2, 0X0D, 0XA7,
	0x23, 2, 0X0E, 0X01,
	0x23, 2, 0X0F, 0XF3,
	0x23, 2, 0X10, 0X02,
	0x23, 2, 0X11, 0X2F,
	0x23, 2, 0X12, 0X02,
	0x23, 2, 0X13, 0X30,
	0x23, 2, 0X14, 0X02,
	0x23, 2, 0X15, 0X66,
	0x23, 2, 0X16, 0X02,
	0x23, 2, 0X17, 0XA0,
	0x23, 2, 0X18, 0X02,
	0x23, 2, 0X19, 0XC5,
	0x23, 2, 0X1A, 0X02,
	0x23, 2, 0X1B, 0XF8,
	0x23, 2, 0X1C, 0X03,
	0x23, 2, 0X1D, 0X1B,
	0x23, 2, 0X1E, 0X03,
	0x23, 2, 0X1F, 0X46,
	0x23, 2, 0X20, 0X03,
	0x23, 2, 0X21, 0X52,
	0x23, 2, 0X22, 0X03,
	0x23, 2, 0X23, 0X62,
	0x23, 2, 0X24, 0X03,
	0x23, 2, 0X25, 0X71,
	0x23, 2, 0X26, 0X03,
	0x23, 2, 0X27, 0X83,
	0x23, 2, 0X28, 0X03,
	0x23, 2, 0X29, 0X94,
	0x23, 2, 0X2A, 0X03,
	0x23, 2, 0X2B, 0XA3,
	0x23, 2, 0X2D, 0X03,
	0x23, 2, 0X2F, 0XAD,
	0x23, 2, 0X30, 0X03,
	0x23, 2, 0X31, 0XCC,

	0x23, 2, 0X32, 0X00, //Gamma G-
	0x23, 2, 0X33, 0X18,
	0x23, 2, 0X34, 0X00,
	0x23, 2, 0X35, 0X38,
	0x23, 2, 0X36, 0X00,
	0x23, 2, 0X37, 0X65,
	0x23, 2, 0X38, 0X00,
	0x23, 2, 0X39, 0X84,
	0x23, 2, 0X3A, 0X00,
	0x23, 2, 0X3B, 0X9B,
	0x23, 2, 0X3D, 0X00,
	0x23, 2, 0X3F, 0XAF,
	0x23, 2, 0X40, 0X00,
	0x23, 2, 0X41, 0XC1,
	0x23, 2, 0X42, 0X00,
	0x23, 2, 0X43, 0XD2,
	0x23, 2, 0X44, 0X00,
	0x23, 2, 0X45, 0XDF,
	0x23, 2, 0X46, 0X01,
	0x23, 2, 0X47, 0X11,
	0x23, 2, 0X48, 0X01,
	0x23, 2, 0X49, 0X38,
	0x23, 2, 0X4A, 0X01,
	0x23, 2, 0X4B, 0X76,
	0x23, 2, 0X4C, 0X01,
	0x23, 2, 0X4D, 0XA7,
	0x23, 2, 0X4E, 0X01,
	0x23, 2, 0X4F, 0XF3,
	0x23, 2, 0X50, 0X02,
	0x23, 2, 0X51, 0X2F,
	0x23, 2, 0X52, 0X02,
	0x23, 2, 0X53, 0X30,
	0x23, 2, 0X54, 0X02,
	0x23, 2, 0X55, 0X66,
	0x23, 2, 0X56, 0X02,
	0x23, 2, 0X58, 0XA0,
	0x23, 2, 0X59, 0X02,
	0x23, 2, 0X5A, 0XC5,
	0x23, 2, 0X5B, 0X02,
	0x23, 2, 0X5C, 0XF8,
	0x23, 2, 0X5D, 0X03,
	0x23, 2, 0X5E, 0X1B,
	0x23, 2, 0X5F, 0X03,
	0x23, 2, 0X60, 0X46,
	0x23, 2, 0X61, 0X03,
	0x23, 2, 0X62, 0X52,
	0x23, 2, 0X63, 0X03,
	0x23, 2, 0X64, 0X62,
	0x23, 2, 0X65, 0X03,
	0x23, 2, 0X66, 0X71,
	0x23, 2, 0X67, 0X03,
	0x23, 2, 0X68, 0X83,
	0x23, 2, 0X69, 0X03,
	0x23, 2, 0X6A, 0X94,
	0x23, 2, 0X6B, 0X03,
	0x23, 2, 0X6C, 0XA3,
	0x23, 2, 0X6D, 0X03,
	0x23, 2, 0X6E, 0XAD,
	0x23, 2, 0X6F, 0X03,
	0x23, 2, 0X70, 0XCC,

	0x23, 2, 0X71, 0X00, //Gamma B+
	0x23, 2, 0X72, 0X18,
	0x23, 2, 0X73, 0X00,
	0x23, 2, 0X74, 0X38,
	0x23, 2, 0X75, 0X00,
	0x23, 2, 0X76, 0X65,
	0x23, 2, 0X77, 0X00,
	0x23, 2, 0X78, 0X84,
	0x23, 2, 0X79, 0X00,
	0x23, 2, 0X7A, 0X9B,
	0x23, 2, 0X7B, 0X00,
	0x23, 2, 0X7C, 0XAF,
	0x23, 2, 0X7D, 0X00,
	0x23, 2, 0X7E, 0XC1,
	0x23, 2, 0X7F, 0X00,
	0x23, 2, 0X80, 0XD2,
	0x23, 2, 0X81, 0X00,
	0x23, 2, 0X82, 0XDF,
	0x23, 2, 0X83, 0X01,
	0x23, 2, 0X84, 0X11,
	0x23, 2, 0X85, 0X01,
	0x23, 2, 0X86, 0X38,
	0x23, 2, 0X87, 0X01,
	0x23, 2, 0X88, 0X76,
	0x23, 2, 0X89, 0X01,
	0x23, 2, 0X8A, 0XA7,
	0x23, 2, 0X8B, 0X01,
	0x23, 2, 0X8C, 0XF3,
	0x23, 2, 0X8D, 0X02,
	0x23, 2, 0X8E, 0X2F,
	0x23, 2, 0X8F, 0X02,
	0x23, 2, 0X90, 0X30,
	0x23, 2, 0X91, 0X02,
	0x23, 2, 0X92, 0X66,
	0x23, 2, 0X93, 0X02,
	0x23, 2, 0X94, 0XA0,
	0x23, 2, 0X95, 0X02,
	0x23, 2, 0X96, 0XC5,
	0x23, 2, 0X97, 0X02,
	0x23, 2, 0X98, 0XF8,
	0x23, 2, 0X99, 0X03,
	0x23, 2, 0X9A, 0X1B,
	0x23, 2, 0X9B, 0X03,
	0x23, 2, 0X9C, 0X46,
	0x23, 2, 0X9D, 0X03,
	0x23, 2, 0X9E, 0X52,
	0x23, 2, 0X9F, 0X03,
	0x23, 2, 0XA0, 0X62,
	0x23, 2, 0XA2, 0X03,
	0x23, 2, 0XA3, 0X71,
	0x23, 2, 0XA4, 0X03,
	0x23, 2, 0XA5, 0X83,
	0x23, 2, 0XA6, 0X03,
	0x23, 2, 0XA7, 0X94,
	0x23, 2, 0XA9, 0X03,
	0x23, 2, 0XAA, 0XA3,
	0x23, 2, 0XAB, 0X03,
	0x23, 2, 0XAC, 0XAD,
	0x23, 2, 0XAD, 0X03,
	0x23, 2, 0XAE, 0XCC,

	0x23, 2, 0XAF, 0X00, //Gamma B-
	0x23, 2, 0XB0, 0X18,
	0x23, 2, 0XB1, 0X00,
	0x23, 2, 0XB2, 0X38,
	0x23, 2, 0XB3, 0X00,
	0x23, 2, 0XB4, 0X65,
	0x23, 2, 0XB5, 0X00,
	0x23, 2, 0XB6, 0X84,
	0x23, 2, 0XB7, 0X00,
	0x23, 2, 0XB8, 0X9B,
	0x23, 2, 0XB9, 0X00,
	0x23, 2, 0XBA, 0XAF,
	0x23, 2, 0XBB, 0X00,
	0x23, 2, 0XBC, 0XC1,
	0x23, 2, 0XBD, 0X00,
	0x23, 2, 0XBE, 0XD2,
	0x23, 2, 0XBF, 0X00,
	0x23, 2, 0XC0, 0XDF,
	0x23, 2, 0XC1, 0X01,
	0x23, 2, 0XC2, 0X11,
	0x23, 2, 0XC3, 0X01,
	0x23, 2, 0XC4, 0X38,
	0x23, 2, 0XC5, 0X01,
	0x23, 2, 0XC6, 0X76,
	0x23, 2, 0XC7, 0X01,
	0x23, 2, 0XC8, 0XA7,
	0x23, 2, 0XC9, 0X01,
	0x23, 2, 0XCA, 0XF3,
	0x23, 2, 0XCB, 0X02,
	0x23, 2, 0XCC, 0X2F,
	0x23, 2, 0XCD, 0X02,
	0x23, 2, 0XCE, 0X30,
	0x23, 2, 0XCF, 0X02,
	0x23, 2, 0XD0, 0X66,
	0x23, 2, 0XD1, 0X02,
	0x23, 2, 0XD2, 0XA0,
	0x23, 2, 0XD3, 0X02,
	0x23, 2, 0XD4, 0XC5,
	0x23, 2, 0XD5, 0X02,
	0x23, 2, 0XD6, 0XF8,
	0x23, 2, 0XD7, 0X03,
	0x23, 2, 0XD8, 0X1B,
	0x23, 2, 0XD9, 0X03,
	0x23, 2, 0XDA, 0X46,
	0x23, 2, 0XDB, 0X03,
	0x23, 2, 0XDC, 0X52,
	0x23, 2, 0XDD, 0X03,
	0x23, 2, 0XDE, 0X62,
	0x23, 2, 0XDF, 0X03,
	0x23, 2, 0XE0, 0X71,
	0x23, 2, 0XE1, 0X03,
	0x23, 2, 0XE2, 0X83,
	0x23, 2, 0XE3, 0X03,
	0x23, 2, 0XE4, 0X94,
	0x23, 2, 0XE5, 0X03,
	0x23, 2, 0XE6, 0XA3,
	0x23, 2, 0XE7, 0X03,
	0x23, 2, 0XE8, 0XAD,
	0x23, 2, 0XE9, 0X03,
	0x23, 2, 0XEA, 0XCC,

	0x23, 2, 0XFF, 0X01, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0XFF, 0X02, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0XFF, 0X04, //CMD page select
	0x23, 2, 0XFB, 0X01, //NON-RELOAD CMD
	0x23, 2, 0XFF, 0X00, //CMD page select

	0x23, 2, 0XD3, 0X05,
	0x23, 2, 0XD4, 0X04,

	0x23, 2, 0X11, 0X00, //Sleep out
	0xfd, 1, 100, //delay 100ms
	0x23, 2, 0XFF, 0X00,

	0x23, 2, 0X35, 0X00, //TE on

	0x23, 2, 0X29, 0X00, //Display on
	0xfd, 1, 100, //delay 100ms
	0xff, 0,   /* ending flag */
};

static unsigned char ext_init_off_table_TL050FHV02CT[LCD_EXTERN_INIT_OFF_MAX] = {
	0x05, 1, 0x28, /* display off */
	0xfd, 1, 10,   /* delay 10ms */
	0x05, 1, 0x10, /* sleep in */
	0xfd, 1, 150,  /* delay 150ms */
	0xFF, 0,   /* ending flag */
};

static struct lcd_extern_config_s ext_config[LCD_EXTERN_NUM_MAX] = {
	{
		.index = 0,
		.name = "ext_default",
		.type = LCD_EXTERN_I2C, /* LCD_EXTERN_I2C, LCD_EXTERN_SPI, LCD_EXTERN_MIPI, LCD_EXTERN_MAX */
		.status = 0, /* 0=disable, 1=enable */
		.i2c_addr = 0x1c, /* 7bit i2c address */
		.i2c_addr2 = 0xff, /* 7bit i2c address, 0xff for invalid */
		.cmd_size = LCD_EXT_CMD_SIZE_DYNAMIC,
		.table_init_on = ext_init_on_table,
		.table_init_on_cnt = sizeof(ext_init_on_table),
		.table_init_off = ext_init_off_table,
		.table_init_off_cnt = sizeof(ext_init_off_table),
	},
	{ /* P070ACB_FT */
		.index = 1,
		.name = "mipi_default",
		.type = LCD_EXTERN_MIPI, /* LCD_EXTERN_I2C, LCD_EXTERN_SPI, LCD_EXTERN_MIPI, LCD_EXTERN_MAX */
		.status = 1, /* 0=disable, 1=enable */
		.cmd_size = LCD_EXT_CMD_SIZE_DYNAMIC,
		.table_init_on = ext_init_on_table_P070ACB_FT,
		.table_init_on_cnt = sizeof(ext_init_on_table_P070ACB_FT),
		.table_init_off = ext_init_off_table_P070ACB_FT,
		.table_init_off_cnt = sizeof(ext_init_off_table_P070ACB_FT),
	},
	{ /* TL050FHV02CT */
		.index = 2,
		.name = "mipi_default",
		.type = LCD_EXTERN_MIPI, /* LCD_EXTERN_I2C, LCD_EXTERN_SPI, LCD_EXTERN_MIPI, LCD_EXTERN_MAX */
		.status = 1, /* 0=disable, 1=enable */
		.cmd_size = LCD_EXT_CMD_SIZE_DYNAMIC,
		.table_init_on = ext_init_on_table_TL050FHV02CT,
		.table_init_on_cnt = sizeof(ext_init_on_table_TL050FHV02CT),
		.table_init_off = ext_init_off_table_TL050FHV02CT,
		.table_init_off_cnt = sizeof(ext_init_off_table_TL050FHV02CT),
	},
	{
		.index = LCD_EXTERN_INDEX_INVALID,
	},
};

#endif


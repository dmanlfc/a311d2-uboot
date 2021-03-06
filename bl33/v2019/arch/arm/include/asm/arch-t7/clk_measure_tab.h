/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#ifndef _ARCH_MESON_T7_MEASURE_H_
#define _ARCH_MESON_T7_MEASURE_H_

static const char* clk_msr_table[] = {
	[0] = "cts_sys_clk",
	[1] = "cts_axi_clk",
	[2] = "cts_rtc_clk",
	[3] = "cts_dspa_clk",
	[4] = "cts_dspb_clk",
	[5] = "cts_mali_clk",
	[6] = "sys_cpu_clk_div16",
	[7] = "cts_ceca_clk",
	[8] = "cts_cecb_clk",
	[10] = "fclk_div5",
	[11] = "mp0_clk_out",
	[12] = "mp1_clk_out",
	[13] = "mp2_clk_out",
	[14] = "mp3_clk_out",
	[15] = "mpll_clk_50m",
	[16] = "pcie_clk_inp",
	[17] = "pcie_clk_inn",
	[18] = "mpll_clk_test_out",
	[19] = "hifi_pll_clk",
	[20] = "gp0_pll_clk",
	[21] = "gp1_pll_clk",
	[22] = "eth_mppll_50m_ckout",
	[23] = "sys_pll_div16",
	[24] = "ddr_dpll_pt_clk",
	[25] = "earcrx_pll_ckout",
	[26] = "paie1_clk_inp",
	[27] = "paie1_clk_inn",
	[28] = "cts_amlgdc_clk",
	[29] = "cts_gdc_clk",
	[30] = "mod_eth_phy_ref_clk",
	[31] = "mod_eth_tx_clk",
	[32] = "cts_eth_clk125Mhz",
	[33] = "cts_eth_clk_rmii",
	[34] = "co_clkin_to_mac",
	[35] = "mod_eth_rx_clk_rmii",
	[36] = "co_rx_clk",
	[37] = "co_tx_clk",
	[38] = "eth_phy_rxclk",
	[39] = "eth_phy_plltxclk",
	[40] = "ephy_test_clk",
	[41] = "cts_dsi_b_meas_clk",
	[42] = "hdmirx_apll_clk_out",
	[43] = "hdmirx_tmds_clk",
	[44] = "hdmirx_cable_clk",
	[45] = "hdmirx_apll_clk_audio",
	[46] = "hdmirx_5m_clk",
	[47] = "hdmirx_2m_clk",
	[48] = "hdmirx_cfg_clk",
	[49] = "hdmirx_hdcp2x_eclk",
	[50] = "vid_pll0_div_clk_out",
	[51] = "hdmi_vid_pll_clk",
	[54] = "cts_vdac_clk",
	[55] = "cts_vpu_clk_buf",
	[56] = "mod_tcon_clko",
	[57] = "lcd_an_clk_ph2",
	[58] = "lcd_an_clk_ph3",
	[59] = "cts_hdmi_tx_pixel_clk",
	[60] = "cts_vdin_meas_clk",
	[61] = "cts_vpu_clk",
	[62] = "cts_vpu_clkb",
	[63] = "cts_vpu_clkb_tmp",
	[64] = "cts_vpu_clkc",
	[65] = "cts_vid_lock_clk",
	[66] = "cts_vapbclk",
	[67] = "cts_ge2d_clk",
	[68] = "cts_aud_pll_clk",
	[69] = "cts_aud_sck",
	[70] = "cts_dsi_a_meas_clk",
	[72] = "cts_mipi_csi_phy",
	[73] = "cts_mipi_isp_clk",
	[76] = "hdmitx_tmds_clk",
	[77] = "cts_hdmitx_sys_clk",
	[78] = "cts_hdmitx_fe_clk",
	[80] = "cts_hdmitx_prif_clk",
	[81] = "cts_hdmitx_200m_clk",
	[82] = "cts_hdmitx_aud_clk",
	[83] = "cts_hdmitx_pnx_clk",
	[84] = "cts_spicc5",
	[85] = "cts_spicc4",
	[86] = "cts_spicc3",
	[87] = "cts_spicc2",
	[93] = "cts_vdec_clk",
	[94] = "cts_wave521_aclk",
	[95] = "cts_wave521_cclk",
	[96] = "cts_wave521_bclk",
	[97] = "cts_hcodec_clk",
	[98] = "cts_hevcb_clk",
	[99] = "cts_hevcf_clk",
	[100] = "cts_hdmi_aud_pll_clk",
	[101] = "cts_hdmi_acr_ref_clk",
	[102] = "cts_hdmi_meter_clk",
	[103] = "cts_hdmi_vid_clk",
	[104] = "cts_hdmi_aud_clk",
	[105] = "cts_hdmi_dsd_clk",
	[108] = "cts_dsi1_phy_clk",
	[109] = "cts_dsi0_phy_clk",
	[110] = "cts_sc_clk(smartcard",
	[111] = "cts_sar_adc_clk",
	[113] = "cts_sd_emmc_C_clk(nand",
	[114] = "cts_sd_emmc_B_clk",
	[115] = "cts_sd_emmc_A_clk",
	[116] = "gpio_msr_clk",
	[117] = "cts_spicc_1_clk",
	[118] = "cts_spicc_0_clk",
	[118] = "cts_anakin_clk",
	[121] = "cts_ts_clk(temp sensor",
	[122] = "ts_a73_clk",
	[123] = "ts_a53_clk",
	[124] = "ts_nna_clk",
	[130] = "audio_vad_clk",
	[131] = "acodec_dac_clk_x128",
	[132] = "audio_locker_out_clk",
	[133] = "audio_locker_in_clk",
	[134] = "audio_tdmout_c_sclk",
	[135] = "audio_tdmout_b_sclk",
	[136] = "audio_tdmout_a_sclk",
	[137] = "audio_tdmin_lb_sclk",
	[138] = "audio_tdmin_c_sclk",
	[139] = "audio_tdmin_b_sclk",
	[140] = "audio_tdmin_a_sclk",
	[141] = "audio_resamplea_clk",
	[142] = "audio_pdm_sysclk",
	[143] = "audio_spdifoutb_mst_clk",
	[144] = "audio_spdifout_mst_clk",
	[145] = "audio_spdifin_mst_clk",
	[146] = "audio_pdm_dclk",
	[147] = "audio_resampleb_clk",
	[148] = "earcrx_pll_dmac_ck",
	[156] = "pwm_ao_h_clk",
	[157] = "pwm_ao_g_clk",
	[158] = "pwm_ao_f_clk",
	[159] = "pwm_ao_e_clk",
	[160] = "pwm_ao_d_clk",
	[161] = "pwm_ao_c_clk",
	[162] = "pwm_ao_b_clk",
	[163] = "pwm_ao_a_clk",
	[164] = "pwm_f_clk",
	[165] = "pwm_e_clk",
	[166] = "pwm_d_clk",
	[167] = "pwm_c_clk",
	[168] = "pwm_b_clk",
	[169] = "pwm_a_clk",
	[170] = "cts_ACLKM",
	[171] = "mclk_pll_clk",
	[172] = "a73_sys_pll_div16",
	[173] = "a73_cpu_clk_div16",
	[176] = "rng_ring_0",
	[177] = "rng_ring_1",
	[178] = "rng_ring_2",
	[179] = "rng_ring_3",
	[180] = "am_ring_out0",
	[181] = "am_ring_out1",
	[182] = "am_ring_out2",
	[183] = "am_ring_out3",
	[184] = "am_ring_out4",
	[185] = "am_ring_out5",
	[186] = "am_ring_out6",
	[187] = "am_ring_out7",
	[188] = "am_ring_out8",
	[189] = "am_ring_out9",
	[190] = "am_ring_out10",
	[191] = "am_ring_out11",
	[192] = "am_ring_out12",
	[193] = "am_ring_out13",
	[194] = "am_ring_out14",
	[195] = "am_ring_out15",
	[196] = "am_ring_out16",
	[197] = "am_ring_out17",
	[198] = "am_ring_out18",
	[199] = "am_ring_out19",
	[200] = "mipi_csi_phy0",
	[201] = "mipi_csi_phy1",
	[202] = "mipi_csi_phy2",
	[203] = "mipi_csi_phy3",
	[204] = "vid_pll1_div_clk",
	[205] = "vid_pll2_div_clk",
	[206] = "am_ring_out20",
	[207] = "am_ring_out21",
	[208] = "am_ring_out22",
	[209] = "am_ring_out23",
	[210] = "am_ring_out24",
	[211] = "am_ring_out25",
	[212] = "am_ring_out26",
	[213] = "am_ring_out27",
	[214] = "am_ring_out28",
	[215] = "am_ring_out29",
	[216] = "am_ring_out30",
	[217] = "am_ring_out31",
	[218] = "am_ring_out32",
	[219] = "cts_enc0_if_clk",
	[220] = "cts_enc2_clk",
	[221] = "cts_enc1_clk",
	[222] = "cts_enc0_clk"
};

#endif

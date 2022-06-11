/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#ifndef _ARCH_MESON_G12A_MEASURE_H_
#define _ARCH_MESON_G12A_MEASURE_H_

const char* clk_msr_table[] = {
	[127] = "1'b0                        ",
	[126] = "1'b0                        ",
	[125] = "1'b0                        ",
	[124] = "1'b0                        ",
	[123] = "1'b0                        ",
	[122] = "mod_audio_pdm_dclk_o        ",
	[121] = "audio_spdifin_mst_clk       ",
	[120] = "audio_spdifout_mst_clk      ",
	[119] = "audio_spdifout_b_mst_clk    ",
	[118] = "audio_pdm_sysclk            ",
	[117] = "audio_resample_sclk         ",
	[116] = "audio_tdmin_a_sclk          ",
	[115] = "audio_tdmin_b_sclk          ",
	[114] = "audio_tdmin_c_sclk          ",
	[113] = "audio_tdmin_lb_sclk         ",
	[112] = "audio_tdmout_a_sclk         ",
	[111] = "audio_tdmout_b_sclk         ",
	[110] = "audio_tdmout_c_sclk         ",
	[109] = "c_alocker_out_clk           ",
	[108] = "c_alocker_in_clk            ",
	[107] = "au_dac_clk_g128x            ",
	[106] = "ephy_test_clk               ",
	[105] = "am_ring_osc_clk_out_ee[9]   ",
	[104] = "am_ring_osc_clk_out_ee[8]   ",
	[103] = "am_ring_osc_clk_out_ee[7]   ",
	[102] = "am_ring_osc_clk_out_ee[6]   ",
	[101] = "am_ring_osc_clk_out_ee[5]   ",
	[100] = "am_ring_osc_clk_out_ee[4]   ",
	[99]  = "am_ring_osc_clk_out_ee[3]   ",
	[98]  = "cts_ts_clk                  ",
	[97]  = "cts_vpu_clkb_tmp            ",
	[96]  = "cts_vpu_clkb                ",
	[95]  = "eth_phy_plltxclk            ",
	[94]  = "eth_phy_rxclk               ",
	[93]  = "1'b0                        ",
	[92]  = "1'b0                        ",
	[91]  = "1'b0                        ",
	[90]  = "cts_hdmitx_sys_clk          ",
	[89]  = "HDMI_CLK_TODIG              ",
	[88]  = "1'b0                        ",
	[87]  = "1'b0                        ",
	[86]  = "1'b0                        ",
	[85]  = "1'b0                        ",
	[84]  = "co_tx_clk                   ",
	[83]  = "co_rx_clk                   ",
	[82]  = "Cts_ge2d_clk                ",
	[81]  = "Cts_vapbclk                 ",
	[80]  = "Rng_ring_osc_clk[3]         ",
	[79]  = "Rng_ring_osc_clk[2]         ",
	[78]  = "Rng_ring_osc_clk[1]         ",
	[77]  = "Rng_ring_osc_clk[0]         ",
	[76]  = "1'b0                        ",
	[75]  = "cts_hevcf_clk               ",
	[74]  = "1'b0                        ",
	[73]  = "cts_pwm_C_clk               ",
	[72]  = "cts_pwm_D_clk               ",
	[71]  = "cts_pwm_E_clk               ",
	[70]  = "cts_pwm_F_clk               ",
	[69]  = "Cts_hdcp22_skpclk           ",
	[68]  = "Cts_hdcp22_esmclk           ",
	[67]  = "cts_dsi_phy_clk             ",
	[66]  = "cts_vid_lock_clk            ",
	[65]  = "cts_spicc_0_clk             ",
	[64]  = "Cts_spicc_1_clk             ",
	[63]  = "cts_dsi_meas_clk            ",
	[62]  = "cts_hevcb_clk               ",
	[61]  = "gpio_clk_msr                ",
	[60]  = "1'b0                        ",
	[59]  = "cts_hcodec_clk              ",
	[58]  = "cts_wave4201_bclk           ",
	[57]  = "cts_wave4201_cclk           ",
	[56]  = "cts_wave4201_aclk           ",
	[55]  = "vid_pll_div_clk_out         ",
	[54]  = "cts_vpu_clkc                ",
	[53]  = "sd_emmc_clk_A               ",
	[52]  = "sd_emmc_clk_B               ",
	[51]  = "sd_emmc_clk_C               ",
	[50]  = "mp3_clk_out                 ",
	[49]  = "mp2_clk_out                 ",
	[48]  = "mp1_clk_out                 ",
	[47]  = "ddr_dpll_pt_clk             ",
	[46]  = "cts_vpu_clk                 ",
	[45]  = "cts_pwm_A_clk               ",
	[44]  = "cts_pwm_B_clk               ",
	[43]  = "fclk_div5                   ",
	[42]  = "mp0_clk_out                 ",
	[41]  = "mac_eth_rx_clk_rmii         ",
	[40]  = "1'b0                        ",
	[39]  = "cts_bt656_clk0              ",
	[38]  = "Cts_vdin_meas_clk           ",
	[37]  = "cts_cdac_clk_c              ",
	[36]  = "cts_hdmi_tx_pixel_clk       ",
	[35]  = "cts_mali_clk                ",
	[34]  = "eth_mppll_50m_ckout         ",
	[33]  = "sys_cpu_ring_osc_clk[1]     ",
	[32]  = "cts_vdec_clk                ",
	[31]  = "MPLL_CLK_TEST_OUT           ",
	[30]  = "pcie_clk_inn                ",
	[29]  = "pcie_clk_inp                ",
	[28]  = "Cts_sar_adc_clk             ",
	[27]  = "co_clkin_to_mac             ",
	[26]  = "sc_clk_int                  ",
	[25]  = "cts_eth_clk_rmii            ",
	[24]  = "cts_eth_clk125Mhz           ",
	[23]  = "mpll_clk_50m                ",
	[22]  = "mac_eth_phy_ref_clk         ",
	[21]  = "lcd_an_clk_ph3              ",
	[20]  = "rtc_osc_clk_out             ",
	[19]  = "lcd_an_clk_ph2              ",
	[18]  = "sys_cpu_clk_div16           ",
	[17]  = "sys_pll_div16               ",
	[16]  = "cts_FEC_CLK_2               ",
	[15]  = "cts_FEC_CLK_1               ",
	[14]  = "cts_FEC_CLK_0               ",
	[13]  = "mod_tcon_clko               ",
	[12]  = "hifi_pll_clk                ",
	[11]  = "mac_eth_tx_clk              ",
	[10]  = "cts_vdac_clk                ",
	[9]   = "cts_encl_clk                ",
	[8]   = "cts_encp_clk                ",
	[7]   = "clk81                       ",
	[6]   = "cts_enci_clk                ",
	[5]   = "1'b0                        ",
	[4]   = "gp0_pll_clk                 ",
	[3]   = "A53_ring_osc_clk            ",
	[2]   = "am_ring_osc_clk_out_ee[2]   ",
	[1]   = "am_ring_osc_clk_out_ee[1]   ",
	[0]   = "am_ring_osc_clk_out_ee[0]   ",
};

#endif

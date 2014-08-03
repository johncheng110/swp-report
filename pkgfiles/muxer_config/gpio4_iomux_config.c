/*
 * Copyright (C) 2012, [Your Company Here] All Rights Reserved.
 * IT IS EXPECTED THAT THIS TEXT BE REPLACED WITH THE BOARD SOFTWARE
 * PROVIDER'S COPYRIGHT INFORMATION. THIS TEXT WILL BE DISPLAYED AT 
 * THE TOP OF ALL SOURCE FILES GENERATED FOR THIS BOARD DESIGN.
*/

// File: gpio4_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.3
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for gpio4 module.
void gpio4_iomux_config(void)
{
    // Config gpio4.GPIO4_IO16 to pad DI0_DISP_CLK(N19)
    // HW_IOMUXC_SW_MUX_CTL_PAD_DI0_DISP_CLK_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_DI0_DISP_CLK_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_DI0_DISP_CLK(0x020E009C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ipu1 signal: IPU1_DI0_DISP_CLK
    //     ALT1 (1) - Select instance: lcd signal: LCD_CLK
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO16
    //     ALT8 (8) - Select instance: lcd signal: LCD_WR_RWN
    HW_IOMUXC_SW_MUX_CTL_PAD_DI0_DISP_CLK_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_DI0_DISP_CLK_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_DI0_DISP_CLK_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_DI0_DISP_CLK(0x020E03B0)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_DI0_DISP_CLK_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_DISP_CLK_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_DISP_CLK_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_DISP_CLK_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_DISP_CLK_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_DISP_CLK_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_DISP_CLK_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_DISP_CLK_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_DISP_CLK_SRE_V(SLOW));

    // Config gpio4.GPIO4_IO17 to pad DI0_PIN15(N21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN15_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN15_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_DI0_PIN15(0x020E00A0)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ipu1 signal: IPU1_DI0_PIN15
    //     ALT1 (1) - Select instance: lcd signal: LCD_ENABLE
    //     ALT2 (2) - Select instance: audmux signal: AUD6_TXC
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO17
    //     ALT8 (8) - Select instance: lcd signal: LCD_RD_E
    HW_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN15_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN15_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN15_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_DI0_PIN15(0x020E03B4)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN15_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN15_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN15_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN15_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN15_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN15_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN15_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN15_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN15_SRE_V(SLOW));

    // Config gpio4.GPIO4_IO18 to pad DI0_PIN02(N25)
    // HW_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN02_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN02_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_DI0_PIN02(0x020E00A4)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ipu1 signal: IPU1_DI0_PIN02
    //     ALT1 (1) - Select instance: lcd signal: LCD_HSYNC
    //     ALT2 (2) - Select instance: audmux signal: AUD6_TXD
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO18
    //     ALT8 (8) - Select instance: lcd signal: LCD_RS
    HW_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN02_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN02_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN02_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_DI0_PIN02(0x020E03B8)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN02_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN02_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN02_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN02_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN02_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN02_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN02_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN02_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN02_SRE_V(SLOW));

    // Config gpio4.GPIO4_IO19 to pad DI0_PIN03(N20)
    // HW_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN03_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN03_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_DI0_PIN03(0x020E00A8)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ipu1 signal: IPU1_DI0_PIN03
    //     ALT1 (1) - Select instance: lcd signal: LCD_VSYNC
    //     ALT2 (2) - Select instance: audmux signal: AUD6_TXFS
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO19
    //     ALT8 (8) - Select instance: lcd signal: LCD_CS
    HW_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN03_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN03_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_DI0_PIN03_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_DI0_PIN03(0x020E03BC)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN03_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN03_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN03_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN03_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN03_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN03_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN03_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN03_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DI0_PIN03_SRE_V(SLOW));

    // Config gpio4.GPIO4_IO26 to pad DISP0_DATA05(R25)
    // HW_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA05_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA05_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA05(0x020E00FC)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ipu1 signal: IPU1_DISP0_DATA05
    //     ALT1 (1) - Select instance: lcd signal: LCD_DATA05
    //     ALT2 (2) - Select instance: ecspi3 signal: ECSPI3_SS2
    //     ALT3 (3) - Select instance: audmux signal: AUD6_RXFS
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO26
    HW_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA05_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA05_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA05_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA05(0x020E0410)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA05_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA05_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA05_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA05_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA05_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA05_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA05_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA05_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA05_SRE_V(SLOW));

    // Config gpio4.GPIO4_IO27 to pad DISP0_DATA06(R23)
    // HW_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA06_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA06_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA06(0x020E0100)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ipu1 signal: IPU1_DISP0_DATA06
    //     ALT1 (1) - Select instance: lcd signal: LCD_DATA06
    //     ALT2 (2) - Select instance: ecspi3 signal: ECSPI3_SS3
    //     ALT3 (3) - Select instance: audmux signal: AUD6_RXC
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO27
    HW_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA06_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA06_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA06_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA06(0x020E0414)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA06_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA06_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA06_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA06_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA06_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA06_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA06_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA06_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA06_SRE_V(SLOW));

    // Config gpio4.GPIO4_IO31 to pad DISP0_DATA10(R21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA10_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA10_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA10(0x020E00B8)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ipu1 signal: IPU1_DISP0_DATA10
    //     ALT1 (1) - Select instance: lcd signal: LCD_DATA10
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO31
    HW_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA10_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA10_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_DISP0_DATA10_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA10(0x020E03CC)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA10_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA10_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA10_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA10_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA10_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA10_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA10_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA10_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_DISP0_DATA10_SRE_V(SLOW));
}
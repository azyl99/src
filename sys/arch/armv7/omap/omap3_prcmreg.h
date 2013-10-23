/* $OpenBSD: omap3_prcmreg.h,v 1.2 2013/10/23 11:11:31 rapha Exp $ */
/*
 * Copyright (c) 2007, 2009, 2012 Dale Rahn <drahn@dalerahn.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/* XXX - verify these definitions and correctly merge them with omap4 */
#define	CM_FCLKEN_IVA2		0x0000
#define	CM_CLKEN_PLL_IVA2	0x0004
#define	CM_IDLEST_IVA2		0x0020
#define	CM_IDLEST_PLL_IVA2	0x0024
#define	CM_AUTOIDLE_PLL_IVA2	0x0034
#define	CM_CLKSEL1_PLL_IVA2	0x0040
#define	CM_CLKSEL2_PLL_IVA2	0x0044
#define	CM_CLKSTCTRL_IVA2	0x0048
#define	CM_CLKSTST_IVA2		0x004c
#define	CM_CLKSEL_MPU		0x0940
#define	CM_CLKSTCTRL_MPU	0x0948
#define	RM_RSTST_MPU		0x0958
#define	PM_WKDEP_MPU		0x09C8
#define	PM_EVGENCTRL_MPU	0x09D4
#define	PM_EVEGENONTIM_MPU	0x09D8
#define	PM_EVEGENOFFTIM_MPU	0x09DC
#define	PM_PWSTCTRL_MPU		0x09E0
#define	PM_PWSTST_MPU		0x09E4
#define	CM_FCLKEN1_CORE		0x0a00
#define	CM_FCLKEN1_CORE_MSK	0x41fffe00
#define	CM_FCLKEN2_CORE		0x0a04
#define	CM_FCLKEN2_CORE_MSK	0x00000000
#define	CM_FCLKEN3_CORE		0x0a08
#define	CM_FCLKEN3_CORE_MSK	0x00000007
#define	CM_ICLKEN1_CORE		0x0a10
#define	CM_ICLKEN1_CORE_MSK	0x7ffffed2
#define	CM_ICLKEN2_CORE		0x0a14
#define	CM_ICLKEN2_CORE_MSK	0x0000001f
#define	CM_ICLKEN3_CORE		0x0a18
#define	CM_ICLKEN3_CORE_MSK	0x00000004
#define	CM_ICLKEN4_CORE		0x0a1C
#define	CM_IDLEST1_CORE		0x0a20
#define	CM_IDLEST2_CORE		0x0a24
#define	CM_IDLEST4_CORE		0x0a2C
#define	CM_AUTOIDLE1_CORE	0x0a30
#define	CM_AUTOIDLE2_CORE	0x0a34
#define	CM_AUTOIDLE3_CORE	0x0a38
#define	CM_AUTOIDLE4_CORE	0x0a3C
#define	CM_CLKSEL1_CORE		0x0a40
#define	CM_CLKSEL2_CORE		0x0a44
#define	CM_CLKSTCTRL_CORE	0x0a48
#define	PM_WKEN1_CORE		0x0aA0
#define	PM_WKEN2_CORE		0x0aA4
#define	PM_WKST1_CORE		0x0aB0
#define	PM_WKST2_CORE		0x0aB4
#define	PM_WKDEP_CORE		0x0aC8
#define	PM_PWSTCTRL_CORE	0x0aE0
#define	PM_PWSTST_CORE		0x0aE4
#define	CM_FCLKEN_GFX		0x0b00
#define	CM_ICLKEN_GFX		0x0b10
#define	CM_IDLEST_GFX		0x0b20
#define	CM_CLKSEL_GFX		0x0b40
#define	CM_CLKSTCTRL_GFX	0x0b48
#define	RM_RSTCTRL_GFX		0x0b50
#define	RM_RSTST_GFX		0x0b58
#define	PM_WKDEP_GFX		0x0bC8
#define	PM_PWSTCTRL_GFX		0x0bE0
#define	PM_PWSTST_GFX		0x0bE4
#define	CM_FCLKEN_WKUP		0x0c00
#define CM_FCLKEN_WKUP_MSK	0x00000029
#define	CM_ICLKEN_WKUP		0x0c10
#define CM_ICLKEN_WKUP_MSK	0x0000002d
#define	CM_IDLEST_WKUP		0x0c20
#define	CM_AUTOIDLE_WKUP	0x0c30
#define	CM_CLKSEL_WKUP		0x0c40
#define	RM_RSTCTRL_WKUP		0x0c50
#define	RM_RSTTIME_WKUP		0x0c54
#define	RM_RSTST_WKUP		0x0c58
#define	PM_WKEN_WKUP		0x0cA0
#define	PM_WKST_WKUP		0x0cB0
#define	CM_CLKEN_PLL		0x0d00
#define	CM_CLKEN2_PLL		0x0d04
#define	CM_IDLEST_CKGEN		0x0d20
#define	CM_AUTOIDLE_PLL		0x0d30
#define	CM_AUTOIDLE2_PLL	0x0d34
#define	CM_CLKSEL1_PLL		0x0d40
#define	CM_CLKSEL2_PLL		0x0d44
#define	CM_CLKSEL3_PLL		0x0d48
#define	CM_CLKSEL4_PLL		0x0d4C
#define	CM_CLKSEL5_PLL		0x0d50
#define	CM_FCLKEN_PER		0x1000
#define	CM_ICLKEN_PER		0x1010
#define	CM_IDLEST_PER		0x1020
#define	CM_AUTOIDLE_PER		0x1030
#define	CM_CLKSEL_PER		0x1040
#define	CM_SLEEPDEP_PER		0x1044
#define	CM_CLKSTCTRL_PER	0x1048
#define	CM_CLKSTST_PER		0x104C
#define	CM_CLKSEL1_EMU		0x1140
#define	CM_CLKSTCTRL_EMU	0x1148
#define	CM_CLKSTST_EMU		0x114C
#define	CM_CLKSEL2_EMU		0x1150
#define	CM_CLKSEL3_EMU		0x1154
#define	CM_POLCTRL		0x129C
#define	CM_IDLEST_NEON		0x1320
#define	CM_CLKSTCTRL_NEON	0x1348
#define	CM_FCLKEN_USBHOST	0x1400
#define	CM_FCLKEN_USBHOST_MSK	0x00000003
#define	CM_ICLKEN_USBHOST	0x1410
#define	CM_ICLKEN_USBHOST_MSK	0x00000001
#define	CM_IDLEST_USBHOST	0x1420
#define	CM_AUTOIDLE_USBHOST	0x1430
#define	CM_SLEEPDEP_USBHOST	0x1444
#define	CM_CLKSTCTRL_USBHOST	0x1448
#define	CM_CLKSTST_USBHOST	0x144C


#define	PRCM_REG_CORE_CLK1	0
#define	PRCM_REG_CORE_CLK1_FADDR	CM_FCLKEN1_CORE
#define	PRCM_REG_CORE_CLK1_IADDR	CM_ICLKEN1_CORE
#define	PRCM_REG_CORE_CLK1_FMASK	CM_FCLKEN1_CORE_MSK
#define	PRCM_REG_CORE_CLK1_IMASK	CM_ICLKEN1_CORE_MSK
#define	PRCM_REG_CORE_CLK1_BASE	(PRCM_REG_CORE_CLK1*32)
#define		PRCM_CLK_EN_MMC3	(PRCM_REG_CORE_CLK1_BASE + 30)
#define		PRCM_CLK_EN_ICR		(PRCM_REG_CORE_CLK1_BASE + 29)
#define		PRCM_CLK_EN_AES2 	(PRCM_REG_CORE_CLK1_BASE + 28)
#define		PRCM_CLK_EN_SHA12 	(PRCM_REG_CORE_CLK1_BASE + 27)
#define		PRCM_CLK_EN_DES2 	(PRCM_REG_CORE_CLK1_BASE + 26)
#define		PRCM_CLK_EN_MMC2	(PRCM_REG_CORE_CLK1_BASE + 25)
#define		PRCM_CLK_EN_MMC1	(PRCM_REG_CORE_CLK1_BASE + 24)
#define		PRCM_CLK_EN_MSPRO	(PRCM_REG_CORE_CLK1_BASE + 23)
#define		PRCM_CLK_EN_HDQ		(PRCM_REG_CORE_CLK1_BASE + 22)
#define		PRCM_CLK_EN_MCSPI4	(PRCM_REG_CORE_CLK1_BASE + 21)
#define		PRCM_CLK_EN_MCSPI3	(PRCM_REG_CORE_CLK1_BASE + 20)
#define		PRCM_CLK_EN_MCSPI2	(PRCM_REG_CORE_CLK1_BASE + 19)
#define		PRCM_CLK_EN_MCSPI1	(PRCM_REG_CORE_CLK1_BASE + 18)
#define		PRCM_CLK_EN_I2C3	(PRCM_REG_CORE_CLK1_BASE + 17)
#define		PRCM_CLK_EN_I2C2	(PRCM_REG_CORE_CLK1_BASE + 16)
#define		PRCM_CLK_EN_I2C1	(PRCM_REG_CORE_CLK1_BASE + 15)
#define		PRCM_CLK_EN_UART2	(PRCM_REG_CORE_CLK1_BASE + 14)
#define		PRCM_CLK_EN_UART1	(PRCM_REG_CORE_CLK1_BASE + 13)
#define		PRCM_CLK_EN_GPT11	(PRCM_REG_CORE_CLK1_BASE + 12)
#define		PRCM_CLK_EN_GPT10	(PRCM_REG_CORE_CLK1_BASE + 11)
#define		PRCM_CLK_EN_MCBSP5	(PRCM_REG_CORE_CLK1_BASE + 10)
#define		PRCM_CLK_EN_MCBSP1	(PRCM_REG_CORE_CLK1_BASE + 9)
#define		PRCM_CLK_EN_MAILBOXES 	(PRCM_REG_CORE_CLK1_BASE + 7)
#define		PRCM_CLK_EN_OMAPCTRL 	(PRCM_REG_CORE_CLK1_BASE + 6)
#define		PRCM_CLK_EN_HSOTGUSB 	(PRCM_REG_CORE_CLK1_BASE + 4)
#define		PRCM_CLK_EN_SDRC 	(PRCM_REG_CORE_CLK1_BASE + 1)

#define	PRCM_REG_CORE_CLK2	1
#define	PRCM_REG_CORE_CLK2_FADDR	CM_FCLKEN2_CORE
#define	PRCM_REG_CORE_CLK2_IADDR	CM_ICLKEN2_CORE
#define	PRCM_REG_CORE_CLK2_FMASK	CM_FCLKEN2_CORE_MSK
#define	PRCM_REG_CORE_CLK2_IMASK	CM_ICLKEN2_CORE_MSK
#define	PRCM_REG_CORE_CLK2_BASE	(PRCM_REG_CORE_CLK2*32)

#define	PRCM_REG_CORE_CLK3	2
#define	PRCM_REG_CORE_CLK3_FADDR	CM_FCLKEN3_CORE
#define	PRCM_REG_CORE_CLK3_IADDR	CM_ICLKEN3_CORE
#define	PRCM_REG_CORE_CLK3_FMASK	CM_FCLKEN3_CORE_MSK
#define	PRCM_REG_CORE_CLK3_IMASK	CM_ICLKEN3_CORE_MSK
#define	PRCM_REG_CORE_CLK3_BASE	(PRCM_REG_CORE_CLK3*32)
#define		PRCM_CORE_EN_USBTLL	(PRCM_REG_CORE_CLK3_BASE + 2)
#define		PRCM_CORE_EN_TS		(PRCM_REG_CORE_CLK3_BASE + 1)
#define		PRCM_CORE_EN_CPEFUSE	(PRCM_REG_CORE_CLK3_BASE + 0)

#define PRCM_REG_WKUP		3
#define PRCM_REG_WKUP_FADDR		CM_FCLKEN_WKUP
#define PRCM_REG_WKUP_IADDR		CM_ICLKEN_WKUP
#define PRCM_REG_WKUP_FMASK		CM_FCLKEN_WKUP_MSK
#define PRCM_REG_WKUP_IMASK		CM_ICLKEN_WKUP_MSK
#define PRCM_REG_WKUP_BASE (PRCM_REG_WKUP*32)
#define		PRCM_CLK_EN_MPU_WDT	(PRCM_REG_WKUP_BASE + 5)
#define		PRCM_CLK_EN_GPIO1	(PRCM_REG_WKUP_BASE + 3)
#define		PRCM_CLK_EN_32KSYNC	(PRCM_REG_WKUP_BASE + 2)
#define		PRCM_CLK_EN_GPT1	(PRCM_REG_WKUP_BASE + 0)

#define PRCM_REG_PER		4
#define PRCM_REG_PER_FADDR		CM_FCLKEN_PER
#define PRCM_REG_PER_IADDR		CM_ICLKEN_PER
#define PRCM_REG_PER_FMASK		CM_FCLKEN_PER_MSK
#define PRCM_REG_PER_IMASK		CM_ICLKEN_PER_MSK
#define PRCM_REG_PER_BASE (PRCM_REG_PER*32)
#define		PRCM_CLK_EN_GPIO6	(PRCM_REG_PER_BASE + 17)
#define		PRCM_CLK_EN_GPIO5	(PRCM_REG_PER_BASE + 16)
#define		PRCM_CLK_EN_GPIO4	(PRCM_REG_PER_BASE + 15)
#define		PRCM_CLK_EN_GPIO3	(PRCM_REG_PER_BASE + 14)
#define		PRCM_CLK_EN_GPIO2	(PRCM_REG_PER_BASE + 13)
#define		PRCM_CLK_EN_WDT3	(PRCM_REG_PER_BASE + 12)
#define		PRCM_CLK_EN_UART3	(PRCM_REG_PER_BASE + 11)
#define		PRCM_CLK_EN_GPT9	(PRCM_REG_PER_BASE + 10)
#define		PRCM_CLK_EN_GPT8	(PRCM_REG_PER_BASE + 9)
#define		PRCM_CLK_EN_GPT7	(PRCM_REG_PER_BASE + 8)
#define		PRCM_CLK_EN_GPT6	(PRCM_REG_PER_BASE + 7)
#define		PRCM_CLK_EN_GPT5	(PRCM_REG_PER_BASE + 6)
#define		PRCM_CLK_EN_GPT4	(PRCM_REG_PER_BASE + 5)
#define		PRCM_CLK_EN_GPT3	(PRCM_REG_PER_BASE + 4)
#define		PRCM_CLK_EN_GPT2	(PRCM_REG_PER_BASE + 3)
#define		PRCM_CLK_EN_MCBSP4	(PRCM_REG_PER_BASE + 2)
#define		PRCM_CLK_EN_MCBSP3	(PRCM_REG_PER_BASE + 1)
#define		PRCM_CLK_EN_MCBSP2	(PRCM_REG_PER_BASE + 0)

#define	PRCM_REG_USBHOST	5
#define	PRCM_REG_USBHOST_FADDR	CM_FCLKEN_USBHOST
#define	PRCM_REG_USBHOST_IADDR	CM_ICLKEN_USBHOST
#define	PRCM_REG_USBHOST_FMASK	CM_FCLKEN_USBHOST_MSK
#define	PRCM_REG_USBHOST_IMASK	CM_ICLKEN_USBHOST_MSK
#define	PRCM_REG_USBHOST_BASE	(PRCM_REG_USBHOST*32)
#define		PRCM_CLK_EN_USBHOST2	(PRCM_REG_USBHOST_BASE + 1)
#define		PRCM_CLK_EN_USBHOST1	(PRCM_REG_USBHOST_BASE + 0)
#define		PRCM_CLK_EN_USB		(PRCM_REG_USBHOST_BASE + 0)

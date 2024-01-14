#include "at32f403a_system.h"
#include "at32f403a.h"

/**
 * @brief  configures the system clock to 240MHz, sourced from HICK.
 */
void SystemClock_HICK_240MHz() {
	// Enable HICK
	CRM->CTRL |= CRM_CTRL_HICKEN(1);
	while (!(CRM->CTRL & CRM_CTRL_HICKSTBL_MASK)) __asm("nop");

	// Set HICK as PLL source
	CRM->CFG &= ~(CRM_CFG_PLLRCS_MASK);

	// Set PLL multiplier to 60 and set range to >72MHz
	uint32_t mult = 60;
	CRM->CFG = (CRM->CFG & 
		~(CRM_CFG_PLLMULT3_0_MASK | CRM_CFG_PLLMULT5_4_MASK | CRM_CFG_PLLRANGE_MASK)) |
		CRM_CFG_PLLMULT3_0(mult & 0x0F) | CRM_CFG_PLLMULT5_4((mult & 0x30) >> 4) | CRM_CFG_PLLRANGE(1);

	// Enable PLL
	CRM->CTRL |= CRM_CTRL_PLLEN(1);
	while (!(CRM->CTRL & CRM_CTRL_PLLSTBL_MASK)) __asm("nop");

	// Set AHB divider to /1
	CRM->CFG = (CRM->CFG & ~(CRM_CFG_AHBDIV_MASK)) | CRM_CFG_AHBDIV(0x0);

	// Set APB dividers to /2 (max 120MHz)
	CRM->CFG = (CRM->CFG & ~(CRM_CFG_APB1DIV_MASK)) | CRM_CFG_APB1DIV(0x4);
	CRM->CFG = (CRM->CFG & ~(CRM_CFG_APB2DIV_MASK)) | CRM_CFG_APB2DIV(0x4);

	// Enable auto step
	CRM->MISC3 = (CRM->MISC3 & ~(CRM_MISC3_AUTO_STEP_EN_MASK)) |
		CRM_MISC3_AUTO_STEP_EN(CRM_AUTO_STEP_OFF);

	// Select pll as sclk source
	CRM->CFG = (CRM->CFG & ~(CRM_CFG_SCLKSEL_MASK)) | CRM_CFG_SCLKSEL(CRM_SCLK_PLL);
	while ((CRM->CFG & CRM_CFG_SCLKSTS_MASK) != CRM_CFG_SCLKSTS(CRM_SCLK_PLL)) __asm("nop");

	// Disable auto step
	CRM->MISC3 &= ~(CRM_MISC3_AUTO_STEP_EN_MASK);
}

#include "at32f403a.h"
#include "at32f403a_system.h"

int main() {
	SystemClock_HICK_240MHz();

	CRM->APB2EN |= CRM_APB2EN_GPIOCEN(1);
	GPIOC->CFGHR &= ~(GPIO_CFGHR_IOMC13_MASK);
	GPIOC->CFGHR &= ~(GPIO_CFGHR_IOFC13_MASK);
	GPIOC->SCR = (1 << 13);
	GPIOC->CFGHR |= GPIO_CFGHR_IOMC13(0b01) | GPIO_CFGHR_IOFC13(0b00);

	while(1) {
		GPIOC->SCR = (1 << 13);
		for(int i = 0; i < 30000000; i++){__asm("nop");}
		GPIOC->CLR = (1 << 13);
		for(int i = 0; i < 30000000; i++){__asm("nop");}
	}
}


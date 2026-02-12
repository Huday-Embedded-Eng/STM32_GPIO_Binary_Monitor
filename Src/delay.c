#include <stdint.h>
#include "stm32f4xx.h"

#define SYSTICK_1MS_LOAD 16000
#define CTRL_ENABLE   	  (1U << 0)
#define CTRL_CLKSRC    	  (1U << 2)
#define CTRL_COUNTFLAG    (1U << 16)

//SysTick microsecond delay function
#define SYS_CLOCK_HZ 16000000

void systickdelayus(uint32_t delay_us)
{
    // Load value for required microseconds  SYST->RVR
	SysTick->LOAD = (SYS_CLOCK_HZ / 1000000) * delay_us - 1;

    // Clear current value  SYST->CVR
	 SysTick->VAL  = 0;

    // Enable SysTick, processor clock SYST->CSR
	 SysTick->CTRL = CTRL_ENABLE | CTRL_CLKSRC;

    // Wait until COUNTFLAG is set SYST->CSR
	 while((SysTick->CTRL & CTRL_COUNTFLAG) == 0){};

    // Disable SysTick SYST->CSR
	  SysTick->CTRL = 0;
}


void systickdelayms(uint32_t delay_ms)
{
    // Load reload value for 1ms  SYST->RVR
	SysTick->LOAD = SYSTICK_1MS_LOAD - 1;

    // Clear current value SYST->CVR
	 SysTick->VAL  = 0;

    // Enable SysTick, and use processor clock SYST->CSR
	 SysTick->CTRL = CTRL_ENABLE | CTRL_CLKSRC;

    for(uint32_t  i = 0; i < delay_ms; i++)
    {
        // Wait until COUNTFLAG is set  SYST->CSR
    	 while((SysTick->CTRL & CTRL_COUNTFLAG) == 0);
    }

    // Disable SysTick SYST->CSR
    SysTick->CTRL = 0;
}

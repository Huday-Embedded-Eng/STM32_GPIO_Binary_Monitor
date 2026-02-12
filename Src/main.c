#include <stdint.h>
#include "stm32f4xx.h"
#include "delay.h"

int main()
{
	uint32_t lower,upper,pin,i;

	// Enable GPIOC clock
	RCC->AHB1ENR |= 1U << 2;

	// Configure PC0–PC7 as output
	for(pin = 0; pin < 8; pin++)
	{
		GPIOC->MODER &= ~(3U << (pin * 2)); //clear mode
		GPIOC->MODER |= (1U << (pin * 2)); //output mode
	}

	while(1)
	{
		for(i = 1; i < 256; i++)
		{
			lower = i & 0x0F; //lower nibble
			upper = i & 0xF0; //upper nibble

			GPIOC->ODR &= ~0xFF;               // clear PC0–PC7

			GPIOC->ODR |= ((~lower) & 0x0F);   // inverted lower nibble
			GPIOC->ODR |= upper;   			   // upper nibble

			systickdelayms(500);  // 500 ms delay
		}
	}
}

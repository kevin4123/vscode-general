/**
 * @file main.c
 * @brief STM32 Register Project
 *
 * 
 */

#include "stm32f10x.h"


 // before start, modify "compile_flags.txt" to include the necessary libraries and flags.
int main(void) {
	RCC-> APB2ENR = 0x00000010;
	GPIOC->CRH = 0x00300000;
	GPIOC->CRL = 0x00002000;

    while (1){

	}
}


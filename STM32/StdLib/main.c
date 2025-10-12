/**
 * @file main.c
 * @brief STM32 STD Library Project
 *
 * 
 */

#include "stm32f10x.h"

// before start, modify "compile_flags.txt" to include the necessary libraries and flags.
int main(void) {
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_InitStructure);	
	GPIO_ResetBits(GPIOC, GPIO_Pin_13);
	
    while (1){

		
	}  
}

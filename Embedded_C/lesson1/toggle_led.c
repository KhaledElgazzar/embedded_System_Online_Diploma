/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */


#include <stdint.h>

//typedef volatile unsigned int vuint32_t;

#define RCC_BASE 		0x40021000
#define GPIOA_BASE 		0x40010800

#define RCC_AP2ENR 		*(volatile uint32_t*)(RCC_BASE + 0x18)
#define GBIOA_CRH 		*(volatile uint32_t*)(GPIOA_BASE + 0x04)
#define GBIOA_ODR		*(volatile uint32_t*)(GPIOA_BASE + 0x0c)

//#define RCC_IOPAEN		(1 << 2)


//typedef union {
//	vuint32_t  all_field;
//	struct{
//		vuint32_t reserved : 13;   //reserved 0-12 bit
//		vuint32_t p_13 : 1;		   // pin 3
//
//	} pin;
//} R_ODR_T;

//volatile R_ODR_T *R_ODR = (volatile R_ODR_T*)(GPIOA_BASE + 0x0C);

//prototype function
//void DELAY_fun();

int main(){

	RCC_AP2ENR |=(1 << 2);                //Set PORTA clock enabled
	GBIOA_CRH &= 0xFF0FFFFF;               //i need to put 0010 in pins 20:23 without any other modification
	GBIOA_CRH |= 0x00200000;

	for(;;){
		GBIOA_ODR |= 1<<13;  			// Led on
		for(int x=0;x<5000;x++);				// delay function
		GBIOA_ODR &= ~(1<<13); 				// Led off
		for(int x=0;x<5000;x++);
	}

	return 0;
}

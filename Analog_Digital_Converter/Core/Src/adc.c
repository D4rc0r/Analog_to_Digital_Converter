/*
 * adc.c
 *
 *  Created on: May 9, 2021
 *      Author: darcor
 */
#include "adc.h"
#include "main.h"
#include<stdio.h>
#include"stm32l476xx.h"
ADC_HandleTypeDef hadc1;


uint16_t AnalogRead(void)
{
	uint16_t Avalue;
	HAL_ADC_Start(&hadc1);
    HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);
    Avalue = HAL_ADC_GetValue(&hadc1);
    return Avalue;
}
float DigitalConverter(float Aread)
{

	return Aread* 0.0008056;
}


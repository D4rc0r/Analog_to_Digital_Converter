/*
 * adc.h
 *
 *  Created on: May 9, 2021
 *      Author: darcor
 */

#ifndef INC_ADC_H_
#define INC_ADC_H_

#include <stdint.h>


uint16_t AnalogRead(void); //size of function = 16 bits
float DigitalConverter(float Aread);


#endif /* INC_ADC_H_ */

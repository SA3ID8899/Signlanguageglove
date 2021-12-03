/*
 * ADC_Config.h
 *
 *  Created on: Oct 2, 2021
 *      Author: HP
 */

#ifndef MCAL_ADC_ADC_CONFIG_H_
#define MCAL_ADC_ADC_CONFIG_H_
#include"ADC.h"

#define ENABLE 1
#define DISABLE 0

#define ADC_START ENABLE

#define ADSC_START ENABLE

#define ADC_AREF_VOLTAGE 0
#define ADC_AVCC_VOLTAGE 1
#define ADC_VREF_VOLTAGE 2 //2.56V

#define ADC_MODE ADC_AVCC_VOLTAGE

#define ADC_INTERRUPT_ENABLE DISABLE

#define ADC_LeftAdjust ENABLE

#define PRESCALE_2 0
#define PRESCALE_4 1
#define PRESCALE_8 2
#define PRESCALE_16 3
#define PRESCALE_32 4
#define PRESCALE_64 5
#define PRESCALE_128 6

#define FREQ_PRESCALE PRESCALE_128









#endif /* MCAL_ADC_ADC_CONFIG_H_ */

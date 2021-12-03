/*
 * DIO_Config.h
 *
 *  Created on: Sep 17, 2021
 *      Author: HP
 */

#ifndef MCAL_DIO_DIO_CONFIG_H_
#define MCAL_DIO_DIO_CONFIG_H_
#include"DIO.h"

void DIO_init(void);
//check how to extern array of struct using the extern in h file


typedef struct{
	PORT_Types PORT;
	PIN_Types PIN;
	Direction_Type DIR;

}DIO_Config;

extern DIO_Config PIN_Config[];
#endif /* MCAL_DIO_DIO_CONFIG_H_ */

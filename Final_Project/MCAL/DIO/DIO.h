/*
 * DIO.h
 *
 *  Created on: Sep 16, 2021
 *      Author: HP
 */

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_
#include"../../STD_Types.h"
#include"../../Bit_Math.h"
#include"DIO_Types.h"
#include"DIO_Config.h"
#include<util/delay.h>
#include<avr/io.h>

void DIO_write(Channel_Type channel,State_Type state);
uint8 DIO_read(Channel_Type channel);


#endif /* MCAL_DIO_DIO_H_ */

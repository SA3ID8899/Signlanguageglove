/*
 * LCD.h
 *
 *  Created on: Sep 24, 2021
 *      Author: HP
 */

#ifndef HAL_LCD_LCD_H_
#define HAL_LCD_LCD_H_
#include"../../MCAL/DIO/DIO.h"

void LCD_init(void);
void LCD_SendChar(uint8 data);
void LCD_SendCMD(uint8 cmd);
void LCD_SendString(char* string);


#endif /* HAL_LCD_LCD_H_ */

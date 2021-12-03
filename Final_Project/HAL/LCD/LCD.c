/*
 * LCD.c
 *
 *  Created on: Sep 24, 2021
 *      Author: HP
 */
#include"LCD.h"
#include<util/delay.h>

void LCD_init(void){

	_delay_ms(20);
	LCD_SendCMD(0x33);
	LCD_SendCMD(0x32); //Send for 4 Bit Initialization of LCD
	LCD_SendCMD(0x28); //Select 4 Bit Mode, 5*7 Dots
	LCD_SendCMD(0x0C); //Display on,Cursor OFF
	LCD_SendCMD(0x06); //Entry Mode Increment Cursor to Right
	LCD_SendCMD(0x01); //Clear Display


}

void LCD_SendChar(uint8 data){
  DIO_write(LCD_Rs,HIGH);
  DIO_write(LCD_Rw,LOW);

  if(GET_BIT(data,4)) {DIO_write(LCD_D4,HIGH);} else {DIO_write(LCD_D4,LOW);}
  if(GET_BIT(data,5)) {DIO_write(LCD_D5,HIGH);} else {DIO_write(LCD_D5,LOW);}
  if(GET_BIT(data,6)) {DIO_write(LCD_D6,HIGH);} else {DIO_write(LCD_D6,LOW);}
  if(GET_BIT(data,7)) {DIO_write(LCD_D7,HIGH);} else {DIO_write(LCD_D7,LOW);}

  DIO_write(LCD_E,HIGH);
  _delay_us(10);
  DIO_write(LCD_E,LOW);
  _delay_us(200);

  if(GET_BIT(data,0)) {DIO_write(LCD_D4,HIGH);} else {DIO_write(LCD_D4,LOW);}
  if(GET_BIT(data,1)) {DIO_write(LCD_D5,HIGH);} else {DIO_write(LCD_D5,LOW);}
  if(GET_BIT(data,2)) {DIO_write(LCD_D6,HIGH);} else {DIO_write(LCD_D6,LOW);}
  if(GET_BIT(data,3)) {DIO_write(LCD_D7,HIGH);} else {DIO_write(LCD_D7,LOW);}

   DIO_write(LCD_E,HIGH);
   _delay_us(10);
   DIO_write(LCD_E,LOW);
   _delay_us(200);
}

void LCD_SendCMD(uint8 cmd){
	  DIO_write(LCD_Rs,LOW);
	  DIO_write(LCD_Rw,LOW);

	  if(GET_BIT(cmd,4)) {DIO_write(LCD_D4,HIGH);} else {DIO_write(LCD_D4,LOW);}
	  if(GET_BIT(cmd,5)) {DIO_write(LCD_D5,HIGH);} else {DIO_write(LCD_D5,LOW);}
	  if(GET_BIT(cmd,6)) {DIO_write(LCD_D6,HIGH);} else {DIO_write(LCD_D6,LOW);}
	  if(GET_BIT(cmd,7)) {DIO_write(LCD_D7,HIGH);} else {DIO_write(LCD_D7,LOW);}

	  DIO_write(LCD_E,HIGH);
	  _delay_us(10);
	  DIO_write(LCD_E,LOW);
	  _delay_us(2000);

	  if(GET_BIT(cmd,0)) {DIO_write(LCD_D4,HIGH);} else {DIO_write(LCD_D4,LOW);}
	  if(GET_BIT(cmd,1)) {DIO_write(LCD_D5,HIGH);} else {DIO_write(LCD_D5,LOW);}
	  if(GET_BIT(cmd,2)) {DIO_write(LCD_D6,HIGH);} else {DIO_write(LCD_D6,LOW);}
	  if(GET_BIT(cmd,3)) {DIO_write(LCD_D7,HIGH);} else {DIO_write(LCD_D7,LOW);}

	   DIO_write(LCD_E,HIGH);
	   _delay_us(10);
	   DIO_write(LCD_E,LOW);
	   _delay_us(2000);
}

void LCD_SendString(char* string){

	int i=0;
	for(i=0;string[i]!=0;i++)
	{
		LCD_SendChar(string[i]);
	}


}

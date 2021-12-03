/*
 * DIO_Types.h
 *
 *  Created on: Sep 17, 2021
 *      Author: HP
 */

#ifndef MCAL_DIO_DIO_TYPES_H_
#define MCAL_DIO_DIO_TYPES_H_

typedef enum{
	LOW,
	HIGH
}State_Type;

typedef enum{
	//PORTA

	PINA_0,
	POT,
	Relay,
	Buzzer,
	LCD_D4,A=4,
	LCD_D5,B=5,
	LCD_D6,C=6,
	LCD_D7,D=7,

	//PORTB

	Button_0,
	LCD_Rs,EN2=9,
	LCD_Rw,EN1=10,
	LCD_E,DP1=11,
	SS,
	MOSI,
	MISO,
	SCK,

	//PORTC

	SCL,
	SDA,
	LED_0,
	H_A1,
	H_A2,
	H_A3,
	H_A4,
	LED_1,

	//PORTD

	Rx,ROW0=24,
	Tx,ROW1=25,
	BUTTON_2,ROW2=26,
	LED_2,ROW3=27,
	H_EN1,COL0=28,
	H_EN2,COL1=29,
	BUTTON_1,COL2=30,
	SERVO,COL3=31

}Channel_Type;

typedef enum{
	PORT_A,
	PORT_B,
	PORT_C,
	PORT_D
}PORT_Types;

typedef enum{
	PIN_0,
	PIN_1,
	PIN_2,
	PIN_3,
	PIN_4,
	PIN_5,
	PIN_6,
	PIN_7
}PIN_Types;

typedef enum{
	Input,
	Output
}Direction_Type;

#endif /* MCAL_DIO_DIO_TYPES_H_ */

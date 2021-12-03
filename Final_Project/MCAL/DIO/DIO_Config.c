/*
 * DIO_Config.c
 *
 *  Created on: Sep 17, 2021
 *      Author: HP
 */
#include"DIO_Config.h"

DIO_Config PIN_Config[]={

		//PORTA
		{PORT_A,PIN_0,Input},
		{PORT_A,PIN_1,Input},
		{PORT_A,PIN_2,Input},
		{PORT_A,PIN_3,Input},
		{PORT_A,PIN_4,Output},
		{PORT_A,PIN_5,Output},
		{PORT_A,PIN_6,Output},
		{PORT_A,PIN_7,Output},

		//PORTB

		{PORT_B,PIN_0,Output},
		{PORT_B,PIN_1,Output},
		{PORT_B,PIN_2,Output},
		{PORT_B,PIN_3,Output},
		{PORT_B,PIN_4,Output},
		{PORT_B,PIN_5,Output},
		{PORT_B,PIN_6,Output},
		{PORT_B,PIN_7,Output},

		//PORTC

		{PORT_C,PIN_0,Input},
		{PORT_C,PIN_1,Input},
		{PORT_C,PIN_2,Input},
		{PORT_C,PIN_3,Input},
		{PORT_C,PIN_4,Input},
		{PORT_C,PIN_5,Input},
		{PORT_C,PIN_6,Input},
		{PORT_C,PIN_7,Input},

		//PORTD
        // In Case of Connecting Keypad to PORT D
		{PORT_D,PIN_0,Output},
		{PORT_D,PIN_1,Output},
		{PORT_D,PIN_2,Output},
		{PORT_D,PIN_3,Output},
		{PORT_D,PIN_4,Output},
		{PORT_D,PIN_5,Output},
		{PORT_D,PIN_6,Output},
		{PORT_D,PIN_7,Output},



};

void DIO_init(void){

	int i=0;
	for(i=0;i<sizeof((PIN_Config))/(sizeof(PIN_Config[0]));i++)
		{

			if(PIN_Config[i].PORT==PORT_A)
			{
				if(PIN_Config[i].DIR==Output)
				{
					SET_BIT(DDRA,PIN_Config[i].PIN);
				}
				else
					CLR_BIT(DDRA,PIN_Config[i].PIN);
			}

			if(PIN_Config[i].PORT==PORT_B)
			{
				if(PIN_Config[i].DIR==Output)
				{
					SET_BIT(DDRB,PIN_Config[i].PIN);
				}
				else
					CLR_BIT(DDRB,PIN_Config[i].PIN);
			}

			if(PIN_Config[i].PORT==PORT_C)
			{
				if(PIN_Config[i].DIR==Output)
				{
					SET_BIT(DDRC,PIN_Config[i].PIN);
				}
				else
					CLR_BIT(DDRC,PIN_Config[i].PIN);
			}

			if(PIN_Config[i].PORT==PORT_D)
			{
				if(PIN_Config[i].DIR==Output)
				{
					SET_BIT(DDRD,PIN_Config[i].PIN);
				}
				else
					CLR_BIT(DDRD,PIN_Config[i].PIN);
			}
		}
}


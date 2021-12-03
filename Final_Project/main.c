#include<avr/io.h>
#include<stdlib.h>
#include"Bit_Math.h"
#include"STD_Types.h"
#include"MCAL/DIO/DIO.h"
#include"MCAL/ADC/ADC.h"
#include"HAL/LCD/LCD.h"
#include<util/delay.h>


int main() {
	DIO_init();
	LCD_init();
	ADC_init();

	float RESISTANCE_1 = 0; //Storing Digital Output for Sensor 1
	float RESISTANCE_2 = 0; //Storing Digital Output for Sensor 2
	float RESISTANCE_3 = 0; //Storing Digital Output for Sensor 3
	float RESISTANCE_4 = 0; //Storing Digital Output for Sensor 4

//      To test the sensors run the following code by changing the variable Resistance_x in line
//      37 and 38 coherently

//		float Rth_1 = 70.0;
//		float Rth_2 = 296.0;
//		float Rth_3 = 41.3;
//		float Rth_4 = 55.0;
//	int Situation=0;
//	char x[7];
//	while(1)
//	{
//		RESISTANCE_1 = ADC_read(0) / 204.8; //Reading ADC Channel 0 Minimum 65 Kohm
//      RESISTANCE_2 = ADC_read(1) / 204.8; //Reading ADC Channel 0 Minimum 296 Kohm
//      RESISTANCE_3 = ADC_read(2) / 204.8; //Reading ADC Channel 2 Minimum 40	 Kohm
//      RESISTANCE_4 = ADC_read(3) / 204.8; //Reading ADC Channel 3 Range 55

//		dtostrf(RESISTANCE_3,4,1,x);
//		 if (RESISTANCE_3 <= Rth_3)
//		 {
//	Situation=1;
//		 }
//		 else
//		 {
//	Situation=0;
//		 }
//		 break;
//	}
//
//		LCD_SendString("CASE = "); // displaying name
//		if(Situation==0)
//		{
//			LCD_SendString("Bigger");
//		}
//		else
//		{
//			LCD_SendString("Smaller");
//		}
//
//		LCD_SendCMD(0x80 + 0x40 + 0); // shifting cursor  to 1st  shell  of second line
//      LCD_SendString("Value = ");
//      LCD_SendString(x);


	while (1) {
		//Now since it’s a 10bit ADC; for every Vref(5V)/1024=4.88mV
		//we get one digital increment or for every 1V increment in input we get 204.8 count increment.

		RESISTANCE_1 = ADC_read(0) / 204.8; //Reading ADC Channel 0 Minimum 70   Kohm
        RESISTANCE_2 = ADC_read(1) / 204.8; //Reading ADC Channel 1 Minimum 296  Kohm
        RESISTANCE_3 = ADC_read(2) / 204.8; //Reading ADC Channel 2 Minimum 41.3 Kohm
        RESISTANCE_4 = ADC_read(3) / 204.8; //Reading ADC Channel 3 Minimum 55   Kohm

		float Rth_1 =70.0;   //Switching Resistance for Resistance_1
		float Rth_2 =296.0;  //Switching Resistance for Resistance_2
		float Rth_3 =41.3;   //Switching Resistance for Resistance_3
		float Rth_4 =55.0;   //Switching Resistance for Resistance_4

		if (RESISTANCE_1 > Rth_1 && RESISTANCE_2 < Rth_2 && RESISTANCE_3 < Rth_3 && RESISTANCE_4 > Rth_4) {
			LCD_SendString("Peace!");
			break;
		}
		else if (RESISTANCE_1 < Rth_1 && RESISTANCE_2 < Rth_2 && RESISTANCE_3 > Rth_3 && RESISTANCE_4 < Rth_4) {
			LCD_SendString("I love You ");
			break;
		}
		else if (RESISTANCE_1 > Rth_1 && RESISTANCE_2 < Rth_2 && RESISTANCE_3 > Rth_3 && RESISTANCE_4 < Rth_4) {
			LCD_SendString("That's Nice! ");
			break;
		}
		else if (RESISTANCE_1 < Rth_1 && RESISTANCE_2 > Rth_2 && RESISTANCE_3 > Rth_3 && RESISTANCE_4 > Rth_4) {
			LCD_SendString("OK");
			break;
		}

		else if (RESISTANCE_1 < Rth_1 && RESISTANCE_2 < Rth_2 && RESISTANCE_3 < Rth_3 && RESISTANCE_4 < Rth_4) {
			LCD_SendString("Stop Please!");
			break;
		}

		else
		{
		LCD_SendString("ERROR!!");
		break;
		}
	}
}

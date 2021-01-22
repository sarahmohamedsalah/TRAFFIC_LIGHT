/*
 * Traffic light by Sarah.c
 *
 * Created: 12/1/2020 11:39:17 AM
 * Author : Sarah
 */ 


#include "TIMER0.h"

#include "LCD.h"
#include "LED.h"
volatile Uint8t counter1=0;
  volatile Uint8t counter_green=10;
volatile  Uint8t counter_yellow=5;
 volatile Uint8t counter_red=7;
int main(void)
{    LED0_Init();
	 LED1_Init();
	 LED2_Init();
	 LCD_Init();
	// TIMER0_Init();
	//TIMER0_START();
	 
	 
	//TIMER0_CTC_DELAY(5, 78);
	 timer_CTC_init_interrupt();
    /* Replace with your application code */
    while (1) 
    {
		
		counter_green=10;
		counter_yellow=5;
		counter_red=7;
		
		 LCD_Clear();
		 LCD_Write_String(" 10 SEC");
		 LED0_ON();
		while(counter_green>0)
		{
				if(counter1>=100)
				{
					counter1=0;
					counter_green--;
					LCD_Write_Command(0X01);
					LCD_Write_String(" ");
					LCD_Write_Number((counter_green%10));
					// LCD_Write_Number(10);
				}
		}
		// TIMER0_SET_DELAY(500);
		_delay_ms(50);
		 LED1_ON();
		 LED0_OFF();
		 LCD_Clear();
		 LCD_Write_String(" 5 SEC");
		while(counter_yellow>0)
		{
				if(counter1>=100)
				{
					counter1=0;
					counter_yellow--;
					LCD_Write_Command(0X01);
					LCD_Write_String(" ");
					LCD_Write_Number((counter_yellow%10));
					// LCD_Write_Number(5);
				}
		}
		//void TIMER0_SET_DELAY(500);
		_delay_ms(500);
		 LED2_ON();
		 LED1_OFF();
		 LCD_Clear();
		 LCD_Write_String(" 7 SEC");
		while(counter_red>0)
		{ if(counter1>=100)
			{
				counter1=0;
				counter_red--;
				LCD_Write_Command(0X01);
				LCD_Write_String(" ");
				LCD_Write_Number((counter_red%10));
				// LCD_Write_Number(7);
				
				
			}
		}
		
		_delay_ms(500);
		 LED2_OFF();
	}
	
}


ISR(TIMER0_COMP_vect)
{
	
	counter1++;


	
}
   



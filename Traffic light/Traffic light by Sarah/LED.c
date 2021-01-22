/*
 * LED.c
 *
 * Created: 12/3/2020 8:53:21 AM
 *  Author: Sarah
 */ 
#include "LED.h"

void LED0_Init(void)
{
	DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
}
void LED0_ON(void)
{
	DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
}
void LED0_OFF(void)
{
	DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
}
void LED0_TGL(void)
{
	DIO_TogglePin(DIO_PORTC, DIO_PIN2);
}
/*led1*/
void LED1_Init(void){
	
	DIO_SetPin_Direction(DIO_PORTC ,DIO_PIN7 ,DIO_PIN_OUTPUT);
}
void LED1_ON(void){
	
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN7,DIO_PIN_HIGH);
}
void LED1_OFF(void){
	
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN7,DIO_PIN_LOW);
}
void LED1_TGL(void){
	
	
	DIO_TogglePin(DIO_PORTC,DIO_PIN7);
}
/*led2*/
void LED2_Init(void){
	
		DIO_SetPin_Direction(DIO_PORTD ,DIO_PIN3 ,DIO_PIN_OUTPUT);
}
void LED2_ON(void){
	
	DIO_SetPin_Value(DIO_PORTD,DIO_PIN3,DIO_PIN_HIGH);
}
void LED2_OFF(void){
	
	DIO_SetPin_Value(DIO_PORTD,DIO_PIN3,DIO_PIN_LOW);
}
void LED2_TGL(void){
	
	
	DIO_TogglePin(DIO_PORTD,DIO_PIN3);
}
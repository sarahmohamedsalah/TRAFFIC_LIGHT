/*
 * DIO_CONFIG.h
 *
 * Created: 12/1/2020 11:40:51 AM
 *  Author: Sarah
 */ 


#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_
/*CPU LIBARARY*/
#include "CPU_CONFIGURATION.h"
/*DIO PORTS*/
#define  DIO_PORTA 0
#define  DIO_PORTB 1
#define  DIO_PORTC 2
#define  DIO_PORTD 3
/*DIO PINS*/
#define  DIO_PIN0 0
#define  DIO_PIN1 1
#define  DIO_PIN2 2
#define  DIO_PIN3 3
#define  DIO_PIN4 4
#define  DIO_PIN5 5
#define  DIO_PIN6 6
#define  DIO_PIN7 7
/*DIO PIN STATE*/
#define  DIO_PIN_LOW 0
#define  DIO_PIN_HIGH 1
/*DIO PIN DIRECTION*/
#define  DIO_PIN_INPUT 0
#define  DIO_PIN_OUTPUT 1
/*DIO PORT STATE*/
#define  DIO_PORT_LOW 0X00
#define  DIO_PORT_HIGH 0XFF
/*DIO PORT DIRECTION*/
#define  DIO_PORT_INPUT 0X00
#define  DIO_PORT_OUTPUT 0XFF
#endif /* DIO_CONFIG_H_ */
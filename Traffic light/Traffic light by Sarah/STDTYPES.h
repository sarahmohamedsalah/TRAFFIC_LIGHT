/*
 * STDTYPES.h
 *
 * Created: 12/3/2020 7:46:42 AM
 *  Author: Sarah
 */ 


#ifndef STDTYPES_H_
#define STDTYPES_H_

#define HIGH 1
#define LOW 0
typedef unsigned char Uint8t;
typedef unsigned short int Uint16t;
typedef unsigned long int Uint32t;
typedef signed char int8t;
typedef signed short int Int16t;
typedef signed long int Int32t;

typedef float Fint32t;
typedef double Dint64;
typedef enum{
	STD_LOW=0,
	STD_HIGH=1
	}STD_leveltype;


#endif /* STDTYPES_H_ */
/*
 * TIMERO_CONFIG.h
 *
 * Created: 1/1/2021 11:56:58 AM
 *  Author: Sarah
 */ 


#ifndef TIMERO_CONFIG_H_
#define TIMERO_CONFIG_H_
#include "CPU_CONFIGURATION.h"

#define NORMAL_MODE 0
#define PHASE_CORRECT_PWM 1
#define CTC_MODE 2
#define FAST_PWM 3

#define INVERTING_MODE 0
#define NON_INVERTING_MODE 1

#define NO_CLK 0
#define CLK_1024 5

#define WAVE_GENERATION_MODE  CTC_MODE
#define TIMER0_prescaler     CLK_1024
#define TIMER0_PWM_MODE   NON_INVERTING_MODE



#endif /* TIMERO_CONFIG_H_ */
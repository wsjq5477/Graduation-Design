#ifndef __PID_H
#define __PID_H

#include "stm32f10x.h"

/**************************��������********************************/
extern void sort_rise(void);
extern void temperature_sampling(void);
extern void temperature_control(void);
extern void temperature_PID(void);

#endif 

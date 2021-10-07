#ifndef _BEEP_H
#define _BEEP_H

#include "stm32f4xx_hal.h"
#include "gpio.h"

void Beep(unsigned char state);

#define BEEP(n) Beep(n)


#endif


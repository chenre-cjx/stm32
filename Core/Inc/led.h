#ifndef _LED_H
#define _LED_H

#include "stm32f4xx_hal.h"
#include "gpio.h"

void Led0(unsigned char led_state);
void Led1(unsigned char led_state);

#define LED0(n) Led0(n)
#define LED1(n) Led1(n)
			

#endif


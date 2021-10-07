#ifndef _KEY_H
#define _KEY_H

#include "stm32f4xx_hal.h"
#include "gpio.h"

extern uint8_t key_state ;

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
uint8_t Key_Scan(void);

#define KEY0 HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4)
#define KEY1 HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_3)
#define KEY2 HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_2)

#endif

#include "key.h"

uint8_t key_state = 0;

uint8_t Key_Scan(void)
{
	unsigned char key_value = 0;
	
	key_value = 0;
	
	if(KEY0 == 0 || KEY1 == 0 || KEY2  == 0){
		HAL_Delay(10);
		if(KEY0 == 0 || KEY1 == 0 || KEY2  == 0){
			if(KEY0 == 0){
				key_value |= 0x01;
			}
			if(KEY1 == 0){
				key_value |= 0x01 << 1;
			}
			if(KEY2 == 0){
				key_value |= 0x01 << 2;
			}
		}else {
			key_value = 0;
		}
	}else {
			key_value = 0;
	}
	
	return key_value;
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if (GPIO_Pin == GPIO_PIN_0){
		HAL_Delay(10);
		if (HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0) == GPIO_PIN_RESET){
		key_state =~ key_state;
		}			
	}
}

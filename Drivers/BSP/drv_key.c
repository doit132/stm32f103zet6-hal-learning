#include "drv_key.h"

void key_led(void)
{
	int result = 0;
	while (1) {
		result = HAL_GPIO_ReadPin(KEY_LEFT_GPIO_Port, KEY_LEFT_Pin);
		if (result == KEY_STATE_DOWN) {
			// 消抖
			HAL_Delay(10);
			// 延时 10ms 后检测是否还是按下状态, 如果是, 则执行
			if (HAL_GPIO_ReadPin(KEY_LEFT_GPIO_Port, KEY_LEFT_Pin) == KEY_STATE_DOWN) {
				HAL_GPIO_TogglePin(led_red_GPIO_Port, led_red_Pin);
				// 等待按键释放
				while (HAL_GPIO_ReadPin(KEY_LEFT_GPIO_Port, KEY_LEFT_Pin) ==
				       KEY_STATE_DOWN) {
				}
			}
		}
		result = HAL_GPIO_ReadPin(KEY_UP_GPIO_Port, KEY_UP_Pin);
		if (result == KEY_STATE_UP) {
			HAL_GPIO_WritePin(led_blue_GPIO_Port, led_blue_Pin, LED_OFF);
		} else {
			HAL_GPIO_WritePin(led_blue_GPIO_Port, led_blue_Pin, LED_ON);
		}
		result = HAL_GPIO_ReadPin(KEY_RIGHT_GPIO_Port, KEY_RIGHT_Pin);
		if (result == KEY_STATE_UP) {
			HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, LED_OFF);
		} else {
			HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, LED_ON);
		}
	}
}

#include "drv_led.h"

void led_blink(GPIO_TypeDef *led_port, uint16_t led_pin)
{
	while (1) {
		HAL_GPIO_TogglePin(led_port, led_pin);
		HAL_Delay(1000);
	}
}
void colorful_led(void)
{
	short state = 0;
	while (1) {
		if (state < 3 || state == 5) {
			HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, GPIO_PIN_RESET);
		} else {
			HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, GPIO_PIN_SET);
		}

		if (state >= 1 && state <= 3) {
			HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, GPIO_PIN_RESET);
		} else {
			HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, GPIO_PIN_SET);
		}

		if (state >= 2) {
			HAL_GPIO_WritePin(led_blue_GPIO_Port, led_blue_Pin, GPIO_PIN_RESET);
		} else {
			HAL_GPIO_WritePin(led_blue_GPIO_Port, led_blue_Pin, GPIO_PIN_SET);
		}
		HAL_Delay(1000);
		state++;
		if (state > 5) {
			state = 0;
		}
	}
}

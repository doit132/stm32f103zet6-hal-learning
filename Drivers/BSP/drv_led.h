#ifndef __DRV_LED_H
#define __DRV_LED_H

#include "main.h"

void led_blink(GPIO_TypeDef *led_port, uint16_t led_pin);
void colorful_led(void);
#endif

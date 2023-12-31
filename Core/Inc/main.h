/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define KEY_RIGHT_Pin	    GPIO_PIN_3
#define KEY_RIGHT_GPIO_Port GPIOE
#define KEY_LEFT_Pin	    GPIO_PIN_13
#define KEY_LEFT_GPIO_Port  GPIOC
#define KEY_UP_Pin	    GPIO_PIN_0
#define KEY_UP_GPIO_Port    GPIOA
#define led_red_Pin	    GPIO_PIN_0
#define led_red_GPIO_Port   GPIOB
#define led_green_Pin	    GPIO_PIN_1
#define led_green_GPIO_Port GPIOB
#define KEY_DOWN_Pin	    GPIO_PIN_15
#define KEY_DOWN_GPIO_Port  GPIOG
#define KEY_DOWN_EXTI_IRQn  EXTI15_10_IRQn
#define led_blue_Pin	    GPIO_PIN_5
#define led_blue_GPIO_Port  GPIOB

/* USER CODE BEGIN Private defines */
#define LED_ON		    GPIO_PIN_RESET
#define LED_OFF		    GPIO_PIN_SET
#define KEY_STATE_DOWN	    GPIO_PIN_RESET
#define KEY_STATE_UP	    GPIO_PIN_SET
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define display1_clk_Pin GPIO_PIN_4
#define display1_clk_GPIO_Port GPIOA
#define display1_dio_Pin GPIO_PIN_5
#define display1_dio_GPIO_Port GPIOA
#define display2_clk_Pin GPIO_PIN_6
#define display2_clk_GPIO_Port GPIOA
#define display2_dio_Pin GPIO_PIN_7
#define display2_dio_GPIO_Port GPIOA
#define L2_ULTR_B_Echo_Pin GPIO_PIN_0
#define L2_ULTR_B_Echo_GPIO_Port GPIOB
#define L2_ULTR_B_Echo_EXTI_IRQn EXTI0_IRQn
#define Lane2_Green_Pin GPIO_PIN_8
#define Lane2_Green_GPIO_Port GPIOC
#define Lane2_Yellow_Pin GPIO_PIN_8
#define Lane2_Yellow_GPIO_Port GPIOA
#define Lane2_Red_Pin GPIO_PIN_9
#define Lane2_Red_GPIO_Port GPIOA
#define Lane1_Green_Pin GPIO_PIN_10
#define Lane1_Green_GPIO_Port GPIOA
#define Lane1_Yellow_Pin GPIO_PIN_11
#define Lane1_Yellow_GPIO_Port GPIOA
#define Lane1_Red_Pin GPIO_PIN_12
#define Lane1_Red_GPIO_Port GPIOA
#define L2_ULTR_B_Trig_Pin GPIO_PIN_12
#define L2_ULTR_B_Trig_GPIO_Port GPIOC
#define L2_ULTR_A_Echo_Pin GPIO_PIN_2
#define L2_ULTR_A_Echo_GPIO_Port GPIOD
#define L2_ULTR_A_Echo_EXTI_IRQn EXTI2_IRQn
#define L1_ULTR_B_Trig_Pin GPIO_PIN_5
#define L1_ULTR_B_Trig_GPIO_Port GPIOB
#define L1_ULTR_A_Echo_Pin GPIO_PIN_6
#define L1_ULTR_A_Echo_GPIO_Port GPIOB
#define L1_ULTR_A_Echo_EXTI_IRQn EXTI9_5_IRQn
#define L1_ULTR_A_Trig_Pin GPIO_PIN_7
#define L1_ULTR_A_Trig_GPIO_Port GPIOB
#define L1_ULTR_B_Echo_Pin GPIO_PIN_8
#define L1_ULTR_B_Echo_GPIO_Port GPIOB
#define L1_ULTR_B_Echo_EXTI_IRQn EXTI9_5_IRQn
#define L2_ULTR_A_Trig_Pin GPIO_PIN_9
#define L2_ULTR_A_Trig_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

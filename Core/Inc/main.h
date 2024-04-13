/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "pid.h"
#include "motor.h"
//#include <stdio.h>
#include "RPM_Encoder.h"
#include "cmsis_os.h"
#include "uartstdio.h"
#include "ctype.h"
#include "pca9685.h"
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DIRECTION_3_Pin GPIO_PIN_13
#define DIRECTION_3_GPIO_Port GPIOE
#define DIRECTION_2_Pin GPIO_PIN_14
#define DIRECTION_2_GPIO_Port GPIOE
#define DIRECTION_1_Pin GPIO_PIN_15
#define DIRECTION_1_GPIO_Port GPIOE
#define DIRECTION_4_Pin GPIO_PIN_15
#define DIRECTION_4_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
extern TIM_HandleTypeDef htim3;
extern TIM_HandleTypeDef htim5;
extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim4;
extern TIM_HandleTypeDef htim9;
extern TIM_HandleTypeDef htim8;
extern TIM_HandleTypeDef htim12;


extern UART_HandleTypeDef huart3;

extern PID_Param_t pid;
extern void pid_config(void);

extern double rpm_1, rpm_2, rpm_3, rpm_4;
extern double out_1, out_2, out_3, out_4;
extern double Vd, Vtheta;

extern osThreadId_t taskReadButtonHandle;
extern osMessageQueueId_t myButtonsHandle;
extern osThreadId_t CONTROLHandle;

typedef struct {                                // object data type
  char buffer[1];
  uint8_t buffer_index;
} msgQueueObj_t;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

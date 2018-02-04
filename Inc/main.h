/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define A_CTL_Pin GPIO_PIN_5
#define A_CTL_GPIO_Port GPIOE
#define RTC_CE_Pin GPIO_PIN_13
#define RTC_CE_GPIO_Port GPIOC
#define HY_CK_Pin GPIO_PIN_0
#define HY_CK_GPIO_Port GPIOF
#define HY_CS_Pin GPIO_PIN_1
#define HY_CS_GPIO_Port GPIOF
#define HY_DI_Pin GPIO_PIN_2
#define HY_DI_GPIO_Port GPIOF
#define HY_DO_Pin GPIO_PIN_3
#define HY_DO_GPIO_Port GPIOF
#define CTL_D_Pin GPIO_PIN_4
#define CTL_D_GPIO_Port GPIOF
#define CTL_E_Pin GPIO_PIN_5
#define CTL_E_GPIO_Port GPIOF
#define ENB_Pin GPIO_PIN_6
#define ENB_GPIO_Port GPIOF
#define THERMISTOR_Pin GPIO_PIN_4
#define THERMISTOR_GPIO_Port GPIOA
#define LOW_BAT_Pin GPIO_PIN_5
#define LOW_BAT_GPIO_Port GPIOA
#define SCH_UNCONNECTED_B_Pin GPIO_PIN_11
#define SCH_UNCONNECTED_B_GPIO_Port GPIOF
#define SCH_UNCONNECTED_C_Pin GPIO_PIN_13
#define SCH_UNCONNECTED_C_GPIO_Port GPIOF
#define SCH_UNCONNECTED_D_Pin GPIO_PIN_14
#define SCH_UNCONNECTED_D_GPIO_Port GPIOF
#define R_LowZ_Pin GPIO_PIN_0
#define R_LowZ_GPIO_Port GPIOG
#define R_VOLTS_Pin GPIO_PIN_1
#define R_VOLTS_GPIO_Port GPIOG
#define BUZZER_Pin GPIO_PIN_7
#define BUZZER_GPIO_Port GPIOE
#define BL_OUT_Pin GPIO_PIN_8
#define BL_OUT_GPIO_Port GPIOE
#define PWR_CTL_Pin GPIO_PIN_9
#define PWR_CTL_GPIO_Port GPIOE
#define FUSE_mA_Pin GPIO_PIN_10
#define FUSE_mA_GPIO_Port GPIOE
#define FUSE_A_Pin GPIO_PIN_11
#define FUSE_A_GPIO_Port GPIOE
#define SHDN_A_Pin GPIO_PIN_12
#define SHDN_A_GPIO_Port GPIOE
#define SCH_UNCONNECTED_A_Pin GPIO_PIN_13
#define SCH_UNCONNECTED_A_GPIO_Port GPIOE
#define LED_CK_Pin GPIO_PIN_15
#define LED_CK_GPIO_Port GPIOE
#define R_mV_TEMP_Pin GPIO_PIN_2
#define R_mV_TEMP_GPIO_Port GPIOG
#define R_Hz_Duty_Pin GPIO_PIN_3
#define R_Hz_Duty_GPIO_Port GPIOG
#define R_O_B_D_C_Pin GPIO_PIN_4
#define R_O_B_D_C_GPIO_Port GPIOG
#define R_VA_Pin GPIO_PIN_5
#define R_VA_GPIO_Port GPIOG
#define R_uA_Pin GPIO_PIN_6
#define R_uA_GPIO_Port GPIOG
#define R_mA_A_Pin GPIO_PIN_7
#define R_mA_A_GPIO_Port GPIOG
#define B_MODE_Pin GPIO_PIN_8
#define B_MODE_GPIO_Port GPIOG
#define VA_CTL_Pin GPIO_PIN_11
#define VA_CTL_GPIO_Port GPIOA
#define FRE_CTL_Pin GPIO_PIN_12
#define FRE_CTL_GPIO_Port GPIOA
#define TEMP_CTL_Pin GPIO_PIN_2
#define TEMP_CTL_GPIO_Port GPIOH
#define CTL_B_Pin GPIO_PIN_11
#define CTL_B_GPIO_Port GPIOC
#define CTL_A_Pin GPIO_PIN_0
#define CTL_A_GPIO_Port GPIOD
#define PWR_CTL2_Pin GPIO_PIN_1
#define PWR_CTL2_GPIO_Port GPIOD
#define DCmV_CTL_Pin GPIO_PIN_7
#define DCmV_CTL_GPIO_Port GPIOD
#define B_SETUP_Pin GPIO_PIN_9
#define B_SETUP_GPIO_Port GPIOG
#define B_MINMAX_Pin GPIO_PIN_10
#define B_MINMAX_GPIO_Port GPIOG
#define B_MEM_Pin GPIO_PIN_11
#define B_MEM_GPIO_Port GPIOG
#define B_RANGE_Pin GPIO_PIN_12
#define B_RANGE_GPIO_Port GPIOG
#define B_HOLD_Pin GPIO_PIN_13
#define B_HOLD_GPIO_Port GPIOG
#define B_REL_Pin GPIO_PIN_14
#define B_REL_GPIO_Port GPIOG
#define B_PEAK_Pin GPIO_PIN_15
#define B_PEAK_GPIO_Port GPIOG
#define EE_CLK_Pin GPIO_PIN_6
#define EE_CLK_GPIO_Port GPIOB
#define EE_DO_Pin GPIO_PIN_7
#define EE_DO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

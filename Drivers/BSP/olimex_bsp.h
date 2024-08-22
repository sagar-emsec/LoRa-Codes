/*
 * olimex_bsp.h
 *
 *  Created on: Aug 22, 2024
 *      Author: Sagar Dev
 */

#ifndef BSP_OLIMEX_BSP_H_
#define BSP_OLIMEX_BSP_H_

#include "main.h"

#define RF_SW_CTRL1_PIN                          FE_CTRL1_Pin
#define RF_SW_CTRL1_GPIO_PORT                    FE_CTRL1_GPIO_Port

#define RF_SW_CTRL2_PIN                          FE_CTRL2_Pin
#define RF_SW_CTRL2_GPIO_PORT                    FE_CTRL2_GPIO_Port

typedef enum
{
  OLIMEX_SWITCH_OFF    = 0,
  OLIMEX_SWITCH_RX     = 1,
  OLIMEX_SWITCH_RFO_LP = 2,
  OLIMEX_SWITCH_RFO_HP = 3,
} OLIMEX_Switch_TypeDef;

void Olimex_ConfigRfSwitch(OLIMEX_Switch_TypeDef Config);

#endif /* BSP_OLIMEX_BSP_H_ */

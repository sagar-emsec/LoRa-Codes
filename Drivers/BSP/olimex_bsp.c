/*
 * olimex_bsp.c
 *
 *  Created on: Aug 22, 2024
 *      Author: Sagar Dev
 */

#include "olimex_bsp.h"

void Olimex_ConfigRfSwitch(OLIMEX_Switch_TypeDef Config) {
	switch (Config) {
	case OLIMEX_SWITCH_OFF:
	case OLIMEX_SWITCH_RX: {
		/*Turns On in Rx Mode the RF Switch */
		HAL_GPIO_WritePin(RF_SW_CTRL1_GPIO_PORT, RF_SW_CTRL1_PIN, GPIO_PIN_SET);
		HAL_GPIO_WritePin(RF_SW_CTRL2_GPIO_PORT, RF_SW_CTRL2_PIN, GPIO_PIN_RESET);
		break;
	}
	case OLIMEX_SWITCH_RFO_LP:
	case OLIMEX_SWITCH_RFO_HP: {
		/*Turns On in Tx High Power the RF Switch */
		HAL_GPIO_WritePin(RF_SW_CTRL1_GPIO_PORT, RF_SW_CTRL1_PIN, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(RF_SW_CTRL2_GPIO_PORT, RF_SW_CTRL2_PIN, GPIO_PIN_SET);
		break;
	}
	default:
		break;
	}
}

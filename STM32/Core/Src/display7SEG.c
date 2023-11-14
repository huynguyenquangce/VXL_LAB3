/*
 * display7SEG.c
 *
 *  Created on: Nov 14, 2023
 *      Author: admin
 */

#include "display7SEG.h"
#include "main.h"

void updateClockBuffer() {
	clockBuffer[0] = counter1/10;
	clockBuffer[1] = counter1%10;
	clockBuffer[2] = counter2/10;
	clockBuffer[3] = counter2%10;
}

void display7SEG(int value)
{
	switch (value) {
		case 0:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, SET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
			HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
			HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
			HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
			HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
			HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
			HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
			break;
		default:
			break;
	}
}


void update7SEG ( int index ) {
	switch ( index ) {
	case 0:
		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		  display7SEG(clockBuffer[0]);
		break ;
	case 1:
		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG(clockBuffer[1]);
		break ;
	case 2:
		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG(clockBuffer[2]);
		break ;
	case 3:
		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		display7SEG(clockBuffer[3]);
		break ;
	default :
		break ;
	}
}

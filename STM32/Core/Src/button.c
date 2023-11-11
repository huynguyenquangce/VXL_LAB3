/*
 * button.c
 *
 *  Created on: Nov 3, 2023
 *      Author: DELL F89F
 */

#include "button.h"

int KeyReg0 = NORMAL_STATE,
	KeyReg1 = NORMAL_STATE,
	KeyReg2 = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;
int TimerForKeyPress = 200;

void subKeyProcess(){
	//TODO
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void getKeyInput(){
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
		if (KeyReg3 != KeyReg2) {
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE){                    // XU LY NHAN THA
				//TODO
				subKeyProcess();
				TimerForKeyPress = 200;
			}
		}
		else {                                               // XU LY NHAN DE
			TimerForKeyPress--;
			if (TimerForKeyPress == 0){
				if (KeyReg2 == PRESSED_STATE){
					//TODO
					subKeyProcess();
				}
				TimerForKeyPress = 200;
			}
		}
	}
}

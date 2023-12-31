/*
 * button.c
 *
 *  Created on: Nov 14, 2023
 *      Author: admin
 */



//#include "button.h"
//
//int KeyReg0 = NORMAL_STATE,
//	KeyReg1 = NORMAL_STATE,
//	KeyReg2 = NORMAL_STATE;
//int KeyReg3 = NORMAL_STATE;
//
//int KeyReg01 = NORMAL_STATE,
//	KeyReg11 = NORMAL_STATE,
//	KeyReg21 = NORMAL_STATE;
//int KeyReg31 = NORMAL_STATE;
//
//int TimerForKeyPress = 1500;
//
//int button1_flag = 0;
//int button2_flag = 0;
//
//int isButton1Pressed()
//{
//	if(button1_flag == 1)
//	{
//		button1_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//
//int isButton2Pressed()
//{
//	if(button2_flag == 1)
//	{
//		button2_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//void subKey1Process(){
//	//TODO
////	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
//	button1_flag = 1 ;
//}
//
//void subKey2Process(){
//	//TODO
////	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
//	button2_flag = 1 ;
//}
//
//
//void getKey1Input(){
//	KeyReg0 = KeyReg1;
//	KeyReg1 = KeyReg2;
//	KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
//	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
//		if (KeyReg3 != KeyReg2) {
//			KeyReg3 = KeyReg2;
//			if (KeyReg2 == PRESSED_STATE){                    // XU LY NHAN THA
//				//TODO
//				subKey1Process();
//				TimerForKeyPress = 200;
//			}
//		}
//		else {                                               // XU LY NHAN DE
//			TimerForKeyPress--;
//			if (TimerForKeyPress == 0){
//				if (KeyReg2 == PRESSED_STATE){
//					//TODO
////					subKey1Process();
//				}
//				TimerForKeyPress = 200;
//			}
//		}
//	}
//}
//void getKey2Input(){
//	KeyReg01 = KeyReg11;
//	KeyReg11 = KeyReg21;
//	KeyReg21 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
//	if ((KeyReg01 == KeyReg11) && (KeyReg11 == KeyReg21)){
//		if (KeyReg31 != KeyReg21) {
//			KeyReg31 = KeyReg21;
//			if (KeyReg21 == PRESSED_STATE){                    // XU LY NHAN THA
//				//TODO
//				subKey2Process();
//				TimerForKeyPress = 200;
//			}
//		}
//		else {                                               // XU LY NHAN DE
//			TimerForKeyPress--;
//			if (TimerForKeyPress == 0){
//				if (KeyReg21 == PRESSED_STATE){
//					//TODO
////					subKey2Process();
//				}
//				TimerForKeyPress = 200;
//			}
//		}
//	}
//}

/*
 * button.c
 *
 *  Created on: 13 thg 11, 2023
 *      Author: DELL F89F
 */

#include "button.h"

int button1_flag = 0, button2_flag = 0, button3_flag = 0;
// BUTTON 1////////////////////////////////////////////////////
int KeyReg0 = NORMAL_STATE,
	KeyReg1 = NORMAL_STATE,
	KeyReg2 = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;
int TimerForKeyPress1 = 200;

int isButton1Pressed(){
	if (button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void getKeyInput1(){
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
		if (KeyReg3 != KeyReg2) {
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE){                    // XU LY NHAN THA
				//TODO
				button1_flag = 1;
				TimerForKeyPress1 = 200;
			}
		}
		else {                                               // XU LY NHAN DE
			TimerForKeyPress1--;
			if (TimerForKeyPress1 == 0){
				if (KeyReg2 == PRESSED_STATE){
					//TODO
				}
				TimerForKeyPress1 = 200;
			}
		}
	}
}
////////////////////////////////////////

// BUTTON 2////////////////////////////////////////////////////
int KeyReg10 = NORMAL_STATE,
	KeyReg11 = NORMAL_STATE,
	KeyReg12 = NORMAL_STATE;

int KeyReg13 = NORMAL_STATE;
int TimerForKeyPress2 = 200;

int isButton2Pressed(){
	if (button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

void getKeyInput2(){
	KeyReg10 = KeyReg11;
	KeyReg11 = KeyReg12;
	KeyReg12 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	if ((KeyReg10 == KeyReg11) && (KeyReg11 == KeyReg12)){
		if (KeyReg13 != KeyReg12) {
			KeyReg13 = KeyReg12;
			if (KeyReg12 == PRESSED_STATE){                    // XU LY NHAN THA
				//TODO
				button2_flag = 1;
				TimerForKeyPress2 = 200;
			}
		}
		else {                                               // XU LY NHAN DE
			TimerForKeyPress2--;
			if (TimerForKeyPress2 == 0){
				if (KeyReg12 == PRESSED_STATE){
					//TODO
				}
				TimerForKeyPress2 = 200;
			}
		}
	}
}
////////////////////////////////////////

// BUTTON 3////////////////////////////////////////////////////
int KeyReg20 = NORMAL_STATE,
	KeyReg21 = NORMAL_STATE,
	KeyReg22 = NORMAL_STATE;

int KeyReg23 = NORMAL_STATE;
int TimerForKeyPress3 = 200;

int isButton3Pressed(){
	if (button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void getKeyInput3(){
	KeyReg20 = KeyReg21;
	KeyReg21 = KeyReg22;
	KeyReg22 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
	if ((KeyReg20 == KeyReg21) && (KeyReg21 == KeyReg22)){
		if (KeyReg23 != KeyReg22) {
			KeyReg23 = KeyReg22;
			if (KeyReg22 == PRESSED_STATE){                    // XU LY NHAN THA
				//TODO
				button3_flag = 1;
				TimerForKeyPress3 = 200;
			}
		}
		else {                                               // XU LY NHAN DE
			TimerForKeyPress3--;
			if (TimerForKeyPress3 == 0){
				if (KeyReg22 == PRESSED_STATE){
					//TODO
				}
				TimerForKeyPress3 = 200;
			}
		}
	}
}
////////////////////////////////////////


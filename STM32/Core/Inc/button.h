///*
// * button.h
// *
// *  Created on: Nov 14, 2023
// *      Author: admin
// */
//
//#ifndef INC_BUTTON_H_
//#define INC_BUTTON_H_
//
//#include "main.h"
//#define NORMAL_STATE GPIO_PIN_SET
//#define PRESSED_STATE GPIO_PIN_RESET
//
//void getKey1Input();
//void getKey2Input();
//
//int isButton1Pressed();
//int isButton2Pressed();
//#endif /* INC_BUTTON_H_ */
/*
 * button.h
 *
 *  Created on: 13 thg 11, 2023
 *      Author: DELL F89F
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int button1_flag, button2_flag, button3_flag;

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();
void getKeyInput1();
void getKeyInput2();
void getKeyInput3();

#endif /* INC_BUTTON_H_ */

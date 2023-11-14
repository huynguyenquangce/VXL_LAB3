/*
 * global.h
 *
 *  Created on: Nov 14, 2023
 *      Author: admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "button.h"
#include "display7SEG.h"
#include "software_timer.h"
#include "traffic.h"

#define INIT 1
#define AUTO_RED 2
#define AUTO_GREEN 3
#define AUTO_YELLOW 4

extern int status1;
extern int status2;
extern int red_time, green_time, yellow_time;
extern int duration;
extern int counter1;
extern int counter2;
extern int clockBuffer[4];
#endif /* INC_GLOBAL_H_ */

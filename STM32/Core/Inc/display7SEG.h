/*
 * display_7seg.h
 *
 *  Created on: Nov 2, 2023
 *      Author: admin
 */

#ifndef INC_DISPLAY_7SEG_H_
#define INC_DISPLAY_7SEG_H_

#include "global.h"

void display(int value);
void scanled(int idx);
void update_buffer();
#endif /* INC_DISPLAY_7SEG_H_ */

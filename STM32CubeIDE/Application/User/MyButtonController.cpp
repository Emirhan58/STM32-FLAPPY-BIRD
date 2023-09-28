/*
 * MyButtonController.cpp
 *
 *  Created on: Sep 20, 2023
 *      Author: babai
 */

#include <MyButtonController.hpp>
#include <main.h>
#include <touchgfx/hal/HAL.hpp>

extern "C" {
	extern uint8_t User_ButtonState;
	extern uint8_t autoMode;
}

void MyButtonController::init(){
	previousState = 0xFF;
}

bool MyButtonController::sample(uint8_t& key){
	if (User_ButtonState && !autoMode){
			User_ButtonState = 0x00;
			key = 0;
			return true;
	}
	return false;
}

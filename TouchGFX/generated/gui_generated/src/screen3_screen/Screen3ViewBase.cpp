/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen3_screen/Screen3ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "main.h"
extern "C" {
	extern uint8_t timeCounter;
	extern uint8_t screenNumber;
	extern TIM_HandleTypeDef htim2;
}
uint8_t programNumber = 1;


Screen3ViewBase::Screen3ViewBase()
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box3.setPosition(0, 0, 240, 320);
    box3.setColor(touchgfx::Color::getColorFromRGB(56, 54, 54));
    add(box3);

    selectedProgramBox.setPosition(17, 19, 79, 75);
    selectedProgramBox.setColor(touchgfx::Color::getColorFromRGB(105, 106, 112));
    add(selectedProgramBox);

    flappyBirdIcon.setBitmap(touchgfx::Bitmap(BITMAP_BIRD_REMOVEBG_PREVIEW_ID));
    flappyBirdIcon.setPosition(32, 28, 48, 41);
    flappyBirdIcon.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(flappyBirdIcon);

    textArea1.setXY(28, 74);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_5GHL));
    add(textArea1);

    textArea2.setXY(139, 74);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_O2DM));
    add(textArea2);

    cvIcon.setBitmap(touchgfx::Bitmap(BITMAP_FLAPPYBACKGROUND_MIN_ID));
    cvIcon.setPosition(144, 28, 48, 41);
    cvIcon.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(cvIcon);
}

Screen3ViewBase::~Screen3ViewBase()
{

}

void Screen3ViewBase::setupScreen()
{

}

void Screen3ViewBase::handleKeyEvent(uint8_t key)
{
    if(0 == key)
    {
        //Interaction1
        //When hardware button 0 clicked move selectedProgramBox
        //Set position x:22 and y:22 on selectedProgramBox
    	uint16_t moveToX = 1;
    	uint16_t moveToY = 1;

    	switch(programNumber){
    	case 1:
    		moveToX = cvIcon.getX() - 15;
    		moveToY = cvIcon.getY() - 9;
    		programNumber = 2;
    		break;
    	case 2:
    		moveToX = flappyBirdIcon.getX() - 15;
			moveToY = flappyBirdIcon.getY() - 9;
    		programNumber = 1;
    		break;
    	default:
    		break;
    	}

        selectedProgramBox.moveTo(moveToX,moveToY);
    
    }
}

void Screen3ViewBase::handleTickEvent()
{
	if(timeCounter >= 5){
		HAL_TIM_Base_Stop_IT(&htim2);
		timeCounter = 0;
		if(programNumber == 1){
			screenNumber = 1;
			application().gotoFlappyScreenScreenNoTransition();
		}
		else if(programNumber == 2){
			screenNumber = 4;
			application().gotoScreen4ScreenNoTransition();
		}
	}
}
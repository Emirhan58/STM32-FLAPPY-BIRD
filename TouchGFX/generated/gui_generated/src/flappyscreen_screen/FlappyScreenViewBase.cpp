/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/flappyscreen_screen/FlappyScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>


#include "main.h"
#define randomNumberMAX 24

extern "C" {
	extern uint16_t score;
	extern RNG_HandleTypeDef hrng;
	extern uint8_t timeCounter;
	extern uint8_t autoMode;
	extern uint8_t screenNumber;
	extern TIM_HandleTypeDef htim2;
}

int8_t wallNum = 0;
uint32_t randomNumber = 0;
int32_t randomNumberReal = 0;


FlappyScreenViewBase::FlappyScreenViewBase()
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 240, 320);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    add(box1);

    background.setBitmap(touchgfx::Bitmap(BITMAP_FLAPPYBACKGROUND_MIN_ID));
    background.setPosition(0, 0, 240, 320);
    background.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(background);

    wallUp1.setBitmap(touchgfx::Bitmap(BITMAP_FLAPPYWALLUP_ID));
    wallUp1.setPosition(207, 0, 23, 105);
    wallUp1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(wallUp1);

    wallUp4.setBitmap(touchgfx::Bitmap(BITMAP_FLAPPYWALLUP_ID));
    wallUp4.setPosition(417, 0, 23, 78);
    wallUp4.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(wallUp4);

    wallUp3.setBitmap(touchgfx::Bitmap(BITMAP_FLAPPYWALLUP_ID));
    wallUp3.setPosition(347, 0, 23, 105);
    wallUp3.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(wallUp3);

    wallUp2.setBitmap(touchgfx::Bitmap(BITMAP_FLAPPYWALLUP_ID));
    wallUp2.setPosition(277, 0, 23, 132);
    wallUp2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(wallUp2);

    wallDown1.setBitmap(touchgfx::Bitmap(BITMAP_FLAPPYWALLDOWN_ID));
    wallDown1.setPosition(207, 215, 23, 105);
    wallDown1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(wallDown1);

    wallDown4.setBitmap(touchgfx::Bitmap(BITMAP_FLAPPYWALLDOWN_ID));
    wallDown4.setPosition(417, 188, 23, 132);
    wallDown4.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(wallDown4);

    wallDown3.setBitmap(touchgfx::Bitmap(BITMAP_FLAPPYWALLDOWN_ID));
    wallDown3.setPosition(347, 215, 23, 105);
    wallDown3.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(wallDown3);

    wallDown2.setBitmap(touchgfx::Bitmap(BITMAP_FLAPPYWALLDOWN_ID));
    wallDown2.setPosition(277, 242, 23, 78);
    wallDown2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(wallDown2);

    scoreText.setXY(0, 0);
    scoreText.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    scoreText.setLinespacing(0);
    Unicode::snprintf(scoreTextBuffer, SCORETEXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_UD29).getText());
    scoreText.setWildcard(scoreTextBuffer);
    scoreText.resizeToCurrentText();
    scoreText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KDY8));
    add(scoreText);

    bird.setBitmap(touchgfx::Bitmap(BITMAP_BIRD_REMOVEBG_PREVIEW_ID));
    bird.setPosition(30, 136, 46, 48);
    bird.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(bird);
    wallNum = 0;
    randomNumber = 0;
    randomNumberReal = 0;
    autoMode = 0;
}

FlappyScreenViewBase::~FlappyScreenViewBase()
{

}

void FlappyScreenViewBase::setupScreen()
{

}

void FlappyScreenViewBase::handleKeyEvent(uint8_t key)
{
	if(0 == key)
	{
		//Interaction1
		//When hardware button 0 clicked move scalableImage1
		//Set position x:10 and y:10 on scalableImage1
		uint16_t x = bird.getX();
		uint16_t y = bird.getY();

		bird.moveTo(x,y-25);;

	}
}

void FlappyScreenViewBase::handleTickEvent()
{

	if(timeCounter >= 3){
		autoMode = !autoMode;
		timeCounter = 0;
	}
	//Interaction2
	//When every N tick move scalableImage1
	//Set position x:45 and y:45 on scalableImage1
	uint16_t birdx = bird.getX();
	uint16_t birdy = bird.getY();

	// NEW AREA IS 3/4 OF BIRD AREA
	//uint16_t newAreaX = birdx + (0.075 * bird.getWidth());
	//uint16_t newAreaY = birdy + (0.075 * bird.getHeight());
	//uint16_t newAreaXLast = birdx + (0.925 * bird.getWidth());
	//uint16_t newAreaYLast = birdy + (0.925 * bird.getHeight());

	uint16_t newAreaX = birdx + (0.165 * bird.getWidth());
	uint16_t newAreaY = birdy + (0.125 * bird.getHeight());
	uint16_t newAreaXLast = birdx + (0.835 * bird.getWidth());
	uint16_t newAreaYLast = birdy + (0.875 * bird.getHeight());

	bird.moveTo(birdx,birdy+1);

	if(birdy > 320 and birdy < 520){
		application().gotoScreen2ScreenNoTransition();
	}

	if(autoMode){
		if(wallNum == 0 || wallNum == 4){
			if(newAreaXLast >= wallUp4.getX() && newAreaX <= wallUp4.getX() + wallUp4.getWidth()){
				if(newAreaYLast >= wallDown4.getY() - 3){
					bird.moveTo(birdx,birdy - 25);
				}
			}
			else if(newAreaYLast >= wallDown1.getY() - 3){
				bird.moveTo(birdx,birdy - 25);
			}

		}
		else if(wallNum == 1){
			if(newAreaXLast >= wallUp1.getX() && newAreaX <= wallUp1.getX() + wallUp1.getWidth()){
				if(newAreaYLast >= wallDown1.getY() - 3){
					bird.moveTo(birdx,birdy - 25);
				}
			}
			else if(newAreaYLast >= wallDown2.getY() - 3){
				bird.moveTo(birdx,birdy - 25);
			}
		}
		else if(wallNum == 2){
			if(newAreaXLast >= wallUp2.getX() && newAreaX <= wallUp2.getX() + wallUp2.getWidth()){
				if(newAreaYLast >= wallDown2.getY() - 3){
					bird.moveTo(birdx,birdy - 25);
				}
			}
			else if(newAreaYLast >= wallDown3.getY() - 3){
				bird.moveTo(birdx,birdy - 25);
			}
		}
		else if(wallNum == 3){
			if(newAreaXLast >= wallUp3.getX() && newAreaX <= wallUp3.getX() + wallUp3.getWidth()){
				if(newAreaYLast >= wallDown3.getY() - 3){
					bird.moveTo(birdx,birdy - 25);
				}
			}
			else if(newAreaYLast >= wallDown4.getY() - 3){
				bird.moveTo(birdx,birdy - 25);
			}
		}
	}

	uint16_t wallWidth = wallUp1.getWidth();
	uint16_t wallRestartX = 277 - wallWidth;

	wallUp1.moveTo(wallUp1.getX() - 1, 0);
	wallUp2.moveTo(wallUp2.getX() - 1, 0);
	wallUp3.moveTo(wallUp3.getX() - 1, 0);
	wallUp4.moveTo(wallUp4.getX() - 1, 0);

	wallDown1.moveTo(wallDown1.getX() - 1, wallDown1.getY());
	wallDown2.moveTo(wallDown2.getX() - 1, wallDown2.getY());
	wallDown3.moveTo(wallDown3.getX() - 1, wallDown3.getY());
	wallDown4.moveTo(wallDown4.getX() - 1, wallDown4.getY());

	if(wallUp1.getX() + wallWidth < 0){
		wallUp1.moveTo(wallRestartX, 0);
		HAL_RNG_GenerateRandomNumber(&hrng, &randomNumber);
		randomNumberReal = randomNumber % (randomNumberMAX * 2);
		if(randomNumberReal > randomNumberMAX){
			randomNumberReal = (randomNumberReal - randomNumberMAX) * (-1);
			if (randomNumberReal > -20){
				randomNumberReal = -20;
			}
		}
		if(randomNumberReal > 0 && randomNumberReal < 20){
			randomNumberReal = 20;
		}
		uint16_t newHeight = wallUp4.getHeight() + randomNumberReal;
		if(newHeight > 10 && (320 - (newHeight + 110)) > 10){
			wallUp1.setHeight(wallUp4.getHeight() + randomNumberReal);
		}
	}
	if(wallUp2.getX() + wallWidth < 0){
		wallUp2.moveTo(wallRestartX, 0);
		HAL_RNG_GenerateRandomNumber(&hrng, &randomNumber);
		randomNumberReal = randomNumber % (randomNumberMAX * 2);
		if(randomNumberReal > randomNumberMAX){
			randomNumberReal = (randomNumberReal - randomNumberMAX) * (-1);
			if (randomNumberReal > -20){
				randomNumberReal = -20;
			}
		}
		if(randomNumberReal > 0 && randomNumberReal < 20){
			randomNumberReal = 20;
		}
		uint16_t newHeight = wallUp1.getHeight() + randomNumberReal;
		if(newHeight > 10 && (320 - (newHeight + 110)) > 10){
			wallUp2.setHeight(wallUp1.getHeight() + randomNumberReal);
		}
	}
	if(wallUp3.getX() + wallWidth < 0){
		wallUp3.moveTo(wallRestartX, 0);
		HAL_RNG_GenerateRandomNumber(&hrng, &randomNumber);
		randomNumberReal = randomNumber % (randomNumberMAX * 2);
		if(randomNumberReal > randomNumberMAX){
			randomNumberReal = (randomNumberReal - randomNumberMAX) * (-1);
			if (randomNumberReal > -20){
				randomNumberReal = -20;
			}
		}
		if(randomNumberReal > 0 && randomNumberReal < 20){
			randomNumberReal = 20;
		}
		uint16_t newHeight = wallUp2.getHeight() + randomNumberReal;
		if(newHeight > 10 && (320 - (newHeight + 110)) > 10){
			wallUp3.setHeight(wallUp2.getHeight() + randomNumberReal);
		}
	}
	if(wallUp4.getX() + wallWidth < 0){
		wallUp4.moveTo(wallRestartX, 0);
		HAL_RNG_GenerateRandomNumber(&hrng, &randomNumber);
		randomNumberReal = randomNumber % (randomNumberMAX * 2);
		if(randomNumberReal > randomNumberMAX){
			randomNumberReal = (randomNumberReal - randomNumberMAX) * (-1);
			if (randomNumberReal > -20){
				randomNumberReal = -20;
			}
		}
		if(randomNumberReal > 0 && randomNumberReal < 20){
			randomNumberReal = 20;
		}
		uint16_t newHeight = wallUp3.getHeight() + randomNumberReal;
		if(newHeight > 10 && (320 - (newHeight + 110)) > 10){
			wallUp4.setHeight(wallUp3.getHeight() + randomNumberReal);
		}
	}

	if(wallDown1.getX() + wallWidth < 0){
		wallDown1.moveTo(wallRestartX, wallUp1.getHeight() + 110);
		wallDown1.setHeight(320 - wallDown1.getY());
	}
	if(wallDown2.getX() + wallWidth < 0){
		wallDown2.moveTo(wallRestartX, wallUp2.getHeight() + 110);
		wallDown2.setHeight(320 - wallDown2.getY());
	}
	if(wallDown3.getX() + wallWidth < 0){
		wallDown3.moveTo(wallRestartX, wallUp3.getHeight() + 110);
		wallDown3.setHeight(320 - wallDown3.getY());
	}
	if(wallDown4.getX() + wallWidth < 0){
		wallDown4.moveTo(wallRestartX, wallUp4.getHeight() + 110);
		wallDown4.setHeight(320 - wallDown4.getY());
	}


	if(newAreaXLast >= wallUp1.getX() && newAreaX <= wallUp1.getX() + wallUp1.getWidth()){
		if(newAreaY <= wallUp1.getHeight() || newAreaYLast >= wallDown1.getY()){
			screenNumber = 2;
			HAL_TIM_Base_Stop_IT(&htim2);
			timeCounter = 0;
			application().gotoScreen2ScreenNoTransition();
		}
		if(wallNum != 1){
			wallNum = 1;
			score += 1;
			Unicode::snprintf(scoreTextBuffer, 10, "%u" , score);
			scoreText.resizeToCurrentText();
			scoreText.invalidate();
		}
	}
	if(newAreaXLast >= wallUp2.getX() && newAreaX <= wallUp2.getX() + wallUp2.getWidth()){
		if(newAreaY <= wallUp2.getHeight() || newAreaYLast >= wallDown2.getY()){
			screenNumber = 2;
			HAL_TIM_Base_Stop_IT(&htim2);
			timeCounter = 0;
			application().gotoScreen2ScreenNoTransition();
		}
		if(wallNum != 2){
			wallNum = 2;
			score += 1;
			Unicode::snprintf(scoreTextBuffer, 10, "%u" , score);
			scoreText.resizeToCurrentText();
			scoreText.invalidate();
		}
	}
	if(newAreaXLast >= wallUp3.getX() && newAreaX <= wallUp3.getX() + wallUp3.getWidth()){
		if(newAreaY <= wallUp3.getHeight() || newAreaYLast >= wallDown3.getY()){
			screenNumber = 2;
			HAL_TIM_Base_Stop_IT(&htim2);
			timeCounter = 0;
			application().gotoScreen2ScreenNoTransition();
		}
		if(wallNum != 3){
			wallNum = 3;
			score += 1;
			Unicode::snprintf(scoreTextBuffer, 10, "%u" , score);
			scoreText.resizeToCurrentText();
			scoreText.invalidate();
		}
	}
	if(newAreaXLast >= wallUp4.getX() && newAreaX <= wallUp4.getX() + wallUp4.getWidth()){
		if(newAreaY <= wallUp4.getHeight() || newAreaYLast >= wallDown4.getY()){
			screenNumber = 2;
			HAL_TIM_Base_Stop_IT(&htim2);
			timeCounter = 0;
			application().gotoScreen2ScreenNoTransition();
		}
		if(wallNum != 4){
			wallNum = 4;
			score += 1;
			Unicode::snprintf(scoreTextBuffer, 10, "%u" , score);
			scoreText.resizeToCurrentText();
			scoreText.invalidate();
		}
	}

}




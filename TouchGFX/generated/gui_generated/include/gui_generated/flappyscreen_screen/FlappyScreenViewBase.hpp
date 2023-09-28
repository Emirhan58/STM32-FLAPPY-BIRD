/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FLAPPYSCREENVIEWBASE_HPP
#define FLAPPYSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/flappyscreen_screen/FlappyScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>

class FlappyScreenViewBase : public touchgfx::View<FlappyScreenPresenter>
{
public:
    FlappyScreenViewBase();
    virtual ~FlappyScreenViewBase();
    virtual void setupScreen();
    virtual void handleKeyEvent(uint8_t key);
    virtual void handleTickEvent();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::ScalableImage background;
    touchgfx::ScalableImage wallUp1;
    touchgfx::ScalableImage wallUp4;
    touchgfx::ScalableImage wallUp3;
    touchgfx::ScalableImage wallUp2;
    touchgfx::ScalableImage wallDown1;
    touchgfx::ScalableImage wallDown4;
    touchgfx::ScalableImage wallDown3;
    touchgfx::ScalableImage wallDown2;
    touchgfx::TextAreaWithOneWildcard scoreText;
    touchgfx::ScalableImage bird;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SCORETEXT_SIZE = 10;
    touchgfx::Unicode::UnicodeChar scoreTextBuffer[SCORETEXT_SIZE];

private:

};

#endif // FLAPPYSCREENVIEWBASE_HPP
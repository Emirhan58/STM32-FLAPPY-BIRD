#ifndef FLAPPYSCREENVIEW_HPP
#define FLAPPYSCREENVIEW_HPP

#include <gui_generated/flappyscreen_screen/FlappyScreenViewBase.hpp>
#include <gui/flappyscreen_screen/FlappyScreenPresenter.hpp>

class FlappyScreenView : public FlappyScreenViewBase
{
public:
    FlappyScreenView();
    virtual ~FlappyScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // FLAPPYSCREENVIEW_HPP

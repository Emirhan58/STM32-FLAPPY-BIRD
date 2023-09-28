#ifndef SCREEN4PRESENTER_HPP
#define SCREEN4PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen4View;

class Screen4Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen4Presenter(Screen4View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Screen4Presenter() {}

private:
    Screen4Presenter();

    Screen4View& view;
};

#endif // SCREEN4PRESENTER_HPP

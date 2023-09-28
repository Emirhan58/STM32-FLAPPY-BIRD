#ifndef FLAPPYSCREENPRESENTER_HPP
#define FLAPPYSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class FlappyScreenView;

class FlappyScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    FlappyScreenPresenter(FlappyScreenView& v);

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

    virtual ~FlappyScreenPresenter() {}

private:
    FlappyScreenPresenter();

    FlappyScreenView& view;
};

#endif // FLAPPYSCREENPRESENTER_HPP

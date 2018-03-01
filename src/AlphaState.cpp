#include "AlphaState.h"

void anso::AlphaState::setup(App* app) {
    std::cout << "AlphaState" << std::endl;
}

void anso::AlphaState::update(App* app) {
}

void anso::AlphaState::draw(App* app) {
}

void anso::AlphaState::mouseDown(App* app, const ci::app::MouseEvent& event) {
    changeState(app, std::make_shared<BetaState>()); // alpha -> beta
}

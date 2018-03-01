#include "AppState.h"
#include "App.h"

void anso::AppState::setup(App* app) {
}

void anso::AppState::update(App* app) {
}

void anso::AppState::draw(App* app) {
}

void anso::AppState::mouseDown(App* app, const ci::app::MouseEvent& event) {
}

void anso::AppState::mouseDrag(App* app, const ci::app::MouseEvent& event) {
}

void anso::AppState::mouseUp(App* app, const ci::app::MouseEvent& event) {
}

void anso::AppState::changeState(App* app, std::shared_ptr<AppState> state) {
    app->state = state;
    app->state->setup(app);
}

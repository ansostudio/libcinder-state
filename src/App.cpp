#include "App.h"
#include "AppState.h"

void anso::App::setup() {
    state->setup(this);
}

void anso::App::update() {
    state->update(this);
}

void anso::App::draw() {
    state->draw(this);
}

void anso::App::mouseDown(ci::app::MouseEvent event) {
    state->mouseDown(this, event);
}

void anso::App::mouseDrag(ci::app::MouseEvent event) {
    state->mouseDrag(this, event);
}

void anso::App::mouseUp(ci::app::MouseEvent event) {
    state->mouseUp(this, event);
}

void prepareSettings(anso::App::Settings* settings) {
    settings->setFullScreen(true);
}

CINDER_APP(anso::App, ci::app::RendererGl, prepareSettings)

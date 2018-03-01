#ifndef STATE_APP_H_
#define STATE_APP_H_

#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

#include "AlphaState.h"

namespace anso {

    class AppState;

    class App : public ci::app::App {
        public:
            void setup() override;
            void update() override;
            void draw() override;
            void mouseDown(ci::app::MouseEvent) override;
            void mouseDrag(ci::app::MouseEvent) override;
            void mouseUp(ci::app::MouseEvent) override;

        private:
            friend class AppState;

            std::shared_ptr<AppState> state = std::make_shared<AlphaState>();
    };

}

#endif

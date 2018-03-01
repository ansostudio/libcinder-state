#ifndef STATE_APPSTATE_H_
#define STATE_APPSTATE_H_

#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

namespace anso {

    class App;

    class AppState {
        public:
            AppState() = default;
            virtual ~AppState() = default;
            AppState(const AppState&) = default;
            AppState& operator=(const AppState&) = default;
            AppState(AppState&&) = default;
            AppState& operator=(AppState&&) = default;

            virtual void setup(App*);
            virtual void update(App*);
            virtual void draw(App*);
            virtual void mouseDown(App*, const ci::app::MouseEvent&);
            virtual void mouseDrag(App*, const ci::app::MouseEvent&);
            virtual void mouseUp(App*, const ci::app::MouseEvent&);

        protected:
            void changeState(App*, std::shared_ptr<AppState>);
    };

}

#endif

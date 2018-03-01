#ifndef STATE_ALPHASTATE_H_
#define STATE_ALPHASTATE_H_

#include "AppState.h"
#include "BetaState.h"

namespace anso {

    class AlphaState : public AppState {
        public:
            virtual void setup(App*) override;
            virtual void update(App*) override;
            virtual void draw(App*) override;

            virtual void mouseDown(App*, const ci::app::MouseEvent&) override;
    };

}

#endif

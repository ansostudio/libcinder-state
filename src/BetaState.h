#ifndef STATE_BETASTATE_H_
#define STATE_BETASTATE_H_

#include "AppState.h"
#include "AlphaState.h"

namespace anso {

    class BetaState : public AppState {
        public:
            virtual void setup(App*) override;
            virtual void update(App*) override;
            virtual void draw(App*) override;
    };

}

#endif

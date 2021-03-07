# include "Light.h"
# include "ConcreteLightState.h"

Light::Light() {
    currentState = &LightOff::getInstance();
}

void Light::setState(LightState &newState) {
    currentState->exit(this);
    currentState = &newState;
    currentState->enter(this);
}

void Light::toggle() {
    currentState->toggle(this);
}


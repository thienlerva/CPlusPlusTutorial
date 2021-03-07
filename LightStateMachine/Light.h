

#ifndef LIGHT_H
#define LIGHT_H

# include "LightState.h"

class LightState;

class Light {
public:
    Light();
    inline LightState* getCurrentState() const { return currentState; }
    void toggle();
    void setState(LightState &newState);
    
private:
    LightState *currentState;
};

#endif /* LIGHT_H */


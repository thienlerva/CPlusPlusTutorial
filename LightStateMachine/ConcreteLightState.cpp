#include "ConcreteLightState.h"

void LightOff::toggle(Light *light) {
    // off -> low
    light->setState(LowIntensity::getInstance());
}

LightState &LightOff::getInstance() {
    static LightOff singleton;
    return singleton;
}

void LowIntensity::toggle(Light *light) {
    // Low -> Medium
    light->setState(MediumIntensity::getInstance());
}

void MediumIntensity::toggle(Light *light) {
    // Medium -. High
    light->setState(MediumIntensity::getInstance());
}

LightState &MediumIntensity::getInstance() {
    static MediumIntensity singleton;
    return singleton;
}

void HighIntensity::toggle(Light *light) {
    // High -> Low
    light->setState(LightOff::getInstance());
}

LightState &HighIntensity::getInstance() {
    static HightIntensity singleton;
    return singleton;
}

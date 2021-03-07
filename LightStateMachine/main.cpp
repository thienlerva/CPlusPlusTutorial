#include <cstdlib>
#include "ConcreteLightState.h"
#include "Light.h"
#include "LightState.h"
#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    Light light;
    light.setState(HighIntensity::getInstance());
    light.toggle();
    
    return 0;
}




#include <stdio.h>
#include <stdlib.h>

struct state_machine {
    void (*statePtr) (void *);
};

static void idle(struct state_machine *self) {
    
}

void state_machine_ctor(struct state_machine *self) {
    self->statePtr = (void(*)(void*))idle;
}

int main(int argc, char** argv) {

    struct state_machine machine;
    
    state_machine_ctor(&machine);
    
    for (;;) {
        machine.statePtr(&machine);
    }
    
    return (EXIT_SUCCESS);
}


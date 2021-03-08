#include <stdio.h>
#include <string.h>
#include <time.h>

void led_on() {
    printf("Light is on\n");
}

void led_off() {
    printf("Light is off\n");
}

// void sleep(int *sec) {
//     printf("I'm pausing\n");
// }

int main() {

    enum states {
        LED_ON,
        LED_OFF
    };

    enum states state = LED_OFF;

    while (1) {
        if (state == LED_OFF) {
            led_on();
            state = LED_ON;
        } else {
            led_off();
            state = LED_OFF;
        }
        //int time = 5;
        sleep(5000);
        
    }
}
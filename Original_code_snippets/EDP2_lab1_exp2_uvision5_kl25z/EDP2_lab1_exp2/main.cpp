#include "mbed.h"

// Experiment 2

PwmOut PWM1(PTD4);

DigitalOut gpo(PTD6);
unsigned int toggle;

int main() {
    PWM1.period_us(1000);
    PWM1.pulsewidth_us(400);
    toggle=0;
    
    while (1) {
        gpo=toggle;
        toggle=!toggle;
        wait(0.0005);
    }
}
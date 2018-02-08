#include "mbed.h"

//Experiment 1

DigitalOut gpo1(PTD6);

unsigned int delay(volatile unsigned int loop){
    while(loop){
        loop--;
    }
    return loop;
}

int main() {
    while(1) {
        gpo1=1;
        gpo1 = delay(30000);
        delay(60000);
    }
}
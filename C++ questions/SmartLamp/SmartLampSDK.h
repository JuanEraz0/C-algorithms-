#ifndef SMARTLAMPSDK_H
#define SMARTLAMPSDK_H
#include <iostream>

#define LAMP_ON true
using namespace std;

class SmartLampSDK{
    public:
    bool userInput;
    int brightness;

    SmartLampSDK(bool userInput_, int brightness_);
    ~SmartLampSDK();
    bool powerOn();
    bool powerOff();
    bool setBrightness();

    private:

    bool isPoweredOn();
    volatile int currentBrightness;

};













#endif
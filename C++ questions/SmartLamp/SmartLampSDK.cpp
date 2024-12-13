#include "SmartLampSDK.h"
#include <iostream>
using namespace std;




SmartLampSDK::SmartLampSDK(bool userInput_, int brightness_){
    this->userInput = userInput_;
    this->brightness = brightness_;

}

SmartLampSDK::~SmartLampSDK(){



}


bool SmartLampSDK::powerOn(){
    userInput = LAMP_ON; 
    return userInput;
}

bool SmartLampSDK::setBrightness(){
    if(userInput){
        if (brightness >= 0 && brightness <= 100) //x >= start && x <= end
        {
            cout<< "brightness valid at  "<<brightness<< endl;
            return true;
        }else{
            cout << "brightness value out of margin "<< endl;
            return false;
        }
        
    }
    cout<< " ligh off, cant set brightness "<<endl;
    brightness = 0;
    currentBrightness = brightness;
    return false;
}

bool SmartLampSDK::powerOff(){
    userInput = !LAMP_ON; 
    return userInput;
} 

bool SmartLampSDK::isPoweredOn(){
    if (SmartLampSDK::setBrightness()){
        return true;
    }  
} 
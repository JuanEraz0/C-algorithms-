#include "SmartLampSDK.h"
#include <iostream>
using namespace std;



int main(){
    while(1){
    
    bool lightInput;
    int brightness;

    cout<< " set status "<<endl;
    cin>>lightInput;
    cout<< " set brightness "<<endl;
    cin>>brightness;
    SmartLampSDK prueba_smart(lightInput, brightness);
    prueba_smart.powerOff();
    prueba_smart.setBrightness();
    
    SmartLampSDK *smartLamp = new SmartLampSDK(lightInput,  brightness);
    smartLamp->powerOn();
    smartLamp->setBrightness();
    delete smartLamp;
    }
    return 0;
    


}



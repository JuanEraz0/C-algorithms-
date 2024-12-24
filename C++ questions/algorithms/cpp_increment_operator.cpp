#include <iostream>
using namespace std;


int main(void){
    
    
    int value = 5;
    int newval = value++; // newval = value 
                         //value = value + 1 ; aqui ya vale 6
    int preval = ++value; // value = value + 1; aqui ya vale 7
                         //preval = value ; preval = 7
    int currntval = value ++; //currntval = value ; currntval = 7
                                //value = value + 1 ; value = 8
    
    int finalval = newval + preval + currntval; // finalval = 5 + 7 + 7

    cout<<finalval<<endl;

    
    



    return 0;

}
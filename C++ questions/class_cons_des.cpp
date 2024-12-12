#include<iostream>
using namespace std;

class Base{
    virtual void method(){
        cout<<" from Base"<< endl;

    };

    public:
    virtual ~Base(){
        method();
    };
    void baseMethod(){
        method();
    };

};

class A : public Base{
    void method(){
        cout<<" from A "<<endl;
    };

    public:
        void prueba(){

        };
        ~A(){
            method();
        };


};


int main(){
    Base *base = new A; //en compilacion 
    
    base->baseMethod();

    delete base;
    return 0;



}
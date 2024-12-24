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
    virtual void method(){
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
    Base *base = new A; //en compilacion estatica base es de tipo Base, en dinamica se comporta como A, depende del tipo de metodo si es virtual o no
    
    base->baseMethod();

    delete base;
    return 0;



}
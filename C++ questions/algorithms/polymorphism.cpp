#include <iostream>
using namespace std;

class D{
    public:
    D(){
         cout<<"Creating Class D"<<endl;
    }
    virtual void callme(){ // appliying polymorphism
        cout<<"Thanks for calling"<<endl;
    }
};

class C: virtual public D{ // C & CsD
    public:
    C(){
        cout<<"Creating Class C"<<endl;
    }
    ~C(){
        cout<<"Erasing Class c"<<endl;
    }
};

class B: virtual public D{ //B & BsD
    public:
    B(){
         cout<<"Creating Class B"<<endl;
    }

    ~B(){
        cout<<"Erasing Class B"<<endl;
    }
};

class A: public B, public C{ // A has now 2 D:  BsD & CsD  This leads to ambiguity    inheritance 
    public:
    A(){
         cout<<"Creating Class A"<<endl;
    }
    ~A(){
        cout<<"Erasing Class A"<<endl;
    }
};

/*****************************************************************************************************

When any data / function member of class D is accessed by an object of class A, 
ambiguity arises as to which data/function member would be called? 
One inherited through B or the other inherited through C. This confuses compiler and it displays error.

To resolve this ambiguity when class D is inherited in both class B and class C, it is declared as virtual base class by placing a keyword virtual 

D will be the virtual base Class

**************************************************************************************************** */

int main(){
    A a;
    a.callme();
    return 0;
}
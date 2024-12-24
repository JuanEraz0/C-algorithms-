#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;

//dangling_pointer


int main(){
    int *ptr = new int(10);
    delete ptr;
    ptr= nullptr; // set pointer to nullptr after deletion
    cout<<*ptr<< endl; // during debugging in a step over or into, the systems cause an exception because the nullptr cant be deferenceded 


    return 0;



}
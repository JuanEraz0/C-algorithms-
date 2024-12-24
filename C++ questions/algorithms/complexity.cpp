#include <array>
#include <iostream>
using namespace std;

int main(){

    for(int i = 0; i<array.size(); i++ ){ // O(n)
        for(int j = 0; j<10000; j++ ){ // O (1) porque tiene un numero fijo de iteraciones
            //Do it
        }
    }

}

//Answer: O(n), porque O(n)<- outer for * O(1) <- inner for = O(n)
 

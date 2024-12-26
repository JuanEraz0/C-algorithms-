/* ALGORITMO DE ORDENAMIENTO

numeroActual > numeroSiguiente ?
    swap

*/

#include <iostream>
#include <vector>
#include<stdbool.h>

using namespace  std;




int main(){
    int nums[] = {4,1,8,5,3,6};
    int i=0;
    /*
    The sizeof() operator in C++ returns the size of the passed variable or data in bytes, plus the total number of bytes required to store an array. 
    So, if we divide the size of the array by the size acquired by each element of the same, we can get the total number of elements present in the array.
    

    */
    bool swapped;

    do{ 
        swapped=false;
        for(int j=0;j<(sizeof(nums)/sizeof(nums[0])-1-i);j++){ //in each pass the greater element puts in the end of the array, so to efficient the algorithm, we rest -i times inj each pass
            if (nums[j]>nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                swapped=true;
            }
        }
        i++;
    }while(swapped);


    cout<< "Orden ascendente: "<<endl;

    for(int i=0; i<sizeof(nums)/sizeof(nums[0]);i++){
        cout<< nums[i]<<" , ";
    }


}


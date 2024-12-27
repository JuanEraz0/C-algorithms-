/*
finds the next smallest element in the array

the first element is compared between all the element till find the smallest, 

array: 6,5,3,2,1,4

step 1: 1,5,3,2,6,4

step 2: 1,2,3,5,6,4

step 3: 1,2,3,5,6,4

step 4: 1,2,3,4,6,5

step 5: 1,2,3,4,5,6


*/

#include <iostream>

using namespace std;

void selection_sort(int a[], int size_arr);

int main(){
    int nums[] = {4,1,8,5,3,6};
    int size_arr = sizeof(nums)/sizeof(nums[0]);
    selection_sort(nums, size_arr);

    for(int i = 0; i <sizeof(nums)/sizeof(nums[0]);i++){
        cout<< nums[i]<<endl;
    }

}


void selection_sort(int a[], int size_arr){
    for(int i = 0; i <size_arr-1;i++){
        int min_pos = i; //suponer que i es el numero minimo
        for(int j = i +1; j <size_arr; j++){ // asumir que se va ordenando el arreglo por partes
            if(a[j]<a[min_pos]){
                min_pos = j; //menor elemento del arreglo
            }

        }
        //swapping
        int temp = a[i];
        a[i] = a[min_pos];
        a[min_pos] = temp;

    }


}
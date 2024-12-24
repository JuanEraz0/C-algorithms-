#include <iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> b = {1,2,3,4,5,6};
    int a[] = {1,2,3,4,5,6};
    int *ptr = a;

    //cout<<*(ptr+0)<<endl;  //*(ptr +0) == (0)[a]
    //cout<<(0)[a]<<endl; // a[0] == (0)[a] porque index[a] -> *(index + a)
    cout<<(1+3)[a]<<endl;
    cout<<a[0]<<endl;
    cout<<(a+1)[2]<<endl;
    
    cout<<(1+3)[a]-a[0]+(a+1)[2]<<endl; // (1+3)[a] = (4)[a]= a[4] = 5  ; a[0]=1 ; (a+1)[2] = *((a+1) + 2) = a[3]=4 





}
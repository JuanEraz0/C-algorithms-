#include "two_sum.h"
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    vector<int> nums = {5,6,4,2,3,4,5};
    vector<int> result;
    int target = 7;
    int *ptr = &target;

    TwoSum* two = new TwoSum(nums, *ptr);
    result=two->method();
    cout<<"{"<< result[0]<<result[1]<<"}"<<endl;

    delete two;




}
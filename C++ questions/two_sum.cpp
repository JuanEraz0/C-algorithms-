#include <cstdint>
#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;






/*
// O(n²) time complexity 
// O(1) space complexity

class Solution {
public:
    Solution(){

    }
    ~Solution(){

    }
    vector<int> twoSum(vector<int>& nums, int &target) {
        for(int i=0; i< nums.size(); i++){
            for (int j = i+1; j<nums.size(); j++) {
                if(nums[j]==target - nums[i] ){
                    return {i,j};
                }
            }
        } return {};
    }


   
};


int main(){
    vector<int> nums = {1,2,3,4,5};
    int x = 6;
    int *ptr = &x;
    
    Solution solution = Solution();
    vector<int> result = solution.twoSum(nums, *ptr);

    cout<< result[0]<<result[1]<<endl;


}
*/

//Efficient way to solve the problem: target -> O(n) time complexity, O(n) Space complexity


class Solution {
public:
    Solution(){

    }
    ~Solution(){

    }
    vector<int> twoSum(vector<int>& nums, int &target) {
        unordered_map<int, int > Hash;

        for(int i=0; i< nums.size(); i++){
            Hash[nums[i]]=i;    // <1,0> 

        }
                     for (auto x : Hash)
            cout << x.first << " " << x.second << endl;
         
         
        for(int i=0; i< nums.size(); i++){
            int complement = target - nums[i];    
            if(Hash.find(complement) != Hash.end() && Hash[complement] != i ){
                return {i, Hash[complement]};
            }
        
        }
        return {};
    }


   
};

int main(){
    vector<int> nums = {1,2,3,4,5};
    int x = 7;
    int *ptr = &x;
    
    Solution solution = Solution();
    vector<int> result = solution.twoSum(nums, *ptr);

    cout<< result[0]<<result[1]<<endl;


}

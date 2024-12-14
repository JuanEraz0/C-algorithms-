#include "two_sum.h"
#include <iostream>
#include <vector>
#include <unordered_map>



TwoSum::TwoSum( vector<int> &vector_, int &target_ ){
    //constructor
    this->target_ts = target_;
    this->vector_ts= vector_; 

};

TwoSum::~TwoSum(){
    //destructor

};

vector<int> TwoSum::method(){
    unordered_map<int,int> hash;     // vector[i], i
    for( int i =0; i<vector_ts.size();i++){
        hash[vector_ts[i]]=i; //<1,0>

    }

    for(int i =0; i< vector_ts.size();i++){
        int complement = target_ts - vector_ts[i];// complement = x 
        
        if(hash.find(complement) != hash.end() && hash[complement] != i ){
            return {i, hash[complement]};
        }

    }

    return {};

};




#ifndef TWO_SUM_H
#define TWO_SUM_H
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class TwoSum{
public:
    TwoSum( vector<int> &vector_, int &target_ );
    
    
    vector<int> vector_ts;
    int target_ts;

    vector<int> method();
    


    ~TwoSum();

};






#endif //TWO_SUM_H
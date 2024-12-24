#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1 = {1,2,3};
    cout<<v1.back()<<endl;
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;

    v1.push_back(8);
    cout<<v1.capacity()<<endl; //cuando agrego un elemento, aumenta la capacidad actual al doble
    // cuando se llena la nueva capacidad, la vuelve a aumentar al doble

    v1.push_back(4);
    v1.push_back(4);
    cout<<v1.capacity()<<endl;
    // cuando se llena la nueva capacidad, la vuelve a aumentar al doble

    v1.push_back(4);
    cout<<v1.capacity()<<endl;
    
    v1.shrink_to_fit();
    v1.pop_back();
    cout<<v1.size()<<endl;

    v1.insert(v1.begin(), 13);
    cout<<v1[0]<<endl;    
    cout<<v1.capacity()<<endl;





    
    


}
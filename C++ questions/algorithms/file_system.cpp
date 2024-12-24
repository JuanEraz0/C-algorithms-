#include <iostream>
#include <fstream>
using namespace std;

void readWrite(){
    fstream file("data.txt", ios::in | ios::out);

    if (!file )
    {
        cerr<< "Error: Could not open the file !"<< endl;
        return;
    }

    file<< "Writing data 3"<< endl; //writing data
    file.flush(); //ensure data is written before reading cleaning the buffer 
    //file.seekg(0); // file pointer points to the beggining for reading 
    
    string content;
    
    file>> content; // file reading saves in content

    cout << "Read: " << content << endl; // prints in console



}


int main(){

    readWrite();
    return 0;
}
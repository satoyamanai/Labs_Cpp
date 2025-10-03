#include <iostream>
#include <string>
using namespace std;

void riskyFunction(){
    throw string("Something went wrong!");
}

int main(){
    try{
        riskyFunction();
    } catch (...){
        cerr << "Exception caught!" <<endl;
    }
return 0;
}
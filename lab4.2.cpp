#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

int getElement(const vector<int> & vec, size_t index){
    if (index >= vec.size()){
        throw out_of_range("Index out of range");
    }
    return vec[index];
}



int main(){
    vector<int>vec = {1, 2, 3};
    try{
        cout << getElement(vec, 5) << endl;
    }catch (const out_of_range & e){
        cerr << e.what() << endl;
    }
    return 0;
}
#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
void printType(T value) {
    cout << "Type:" << typeid(T).name() << endl; 
}
template <>
void printType<const char*>(const char* value){
    cout << "Type: C-style string" << endl;
}

int main(){
    printType(42);
    printType(3.14);
    printType("Hello,World!");
    return 0;
}
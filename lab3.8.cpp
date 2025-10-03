#include<iostream>
using namespace std;

//int* a = new int(5); 
//int* arr = new int[3]{1, 2, 3}; 
//delete a;
//Dosen't free the memory of arr.

int main() {
    int* a = new int(5); 
    int* arr = new int[3]{1, 2, 3}; 
    
    cout << "Value of a: " << *a << endl; 
    cout << "Array contents: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
    
    delete a; 
    delete[] arr; 
    return 0;
}

//结果： 
//Value of a: 5
//Array contents: 1 2 3
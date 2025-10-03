#include <iostream>
using namespace std;
class DynamicArray {
private:
    int* data;      
    size_t size;    
public:
    
    DynamicArray(size_t s) : size(s) {
        data = new int[size]; 
        for (size_t i = 0; i < size; ++i) {
            data[i] = 0; 
        }
    }
    
    DynamicArray(const DynamicArray& other) : size(other.size) {
        data = new int[size]; 
        for (size_t i = 0; i < size; ++i) {
            data[i] = other.data[i]; 
        }
    }
    
    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) { 
            delete[] data; 
            size = other.size; 
            data = new int[size]; 
            for (size_t i = 0; i < size; ++i) {
                data[i] = other.data[i]; 
            }
        }
        return *this; 
    }
    
    ~DynamicArray() {
        delete[] data; 
    }
    
    void print() const {
        for (size_t i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    
    void set(size_t index, int value) {
        if (index < size) {
            data[index] = value;
        }
    }
};
int main() {
    DynamicArray arr1(5); 
    for (size_t i = 0; i < 5; ++i) {
        arr1.set(i, i + 1); 
    }
    cout << "Array 1: ";
    arr1.print(); 
    DynamicArray arr2(3); 
    arr2 = arr1; 
    cout << "Array 2 after assignment: ";
    arr2.print(); 
    return 0;
}
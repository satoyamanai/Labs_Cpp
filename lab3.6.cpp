#include <iostream>
using namespace std;
int main() {
    int* array = new int[10];
    for (int i = 0; i < 10; i++) {
        array[i] = i + 1; 
    }
    cout << "Array contents: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " "; 
    }
    cout << endl;
    delete[] array;
    return 0;
}



#include <iostream>
#include <new>      
#include <climits>  
using namespace std;

int main() {
    try {
        int* hugeArray = new int[INT_MAX];  
       cout << "Память успешно выделена!" << endl;
        delete[] hugeArray;  

    } catch (const bad_alloc& e) {
        cerr << "Ошибка выделения памяти: " << e.what() << endl;
    }

    return 0;
}
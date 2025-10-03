#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    auto checkZero = [](int x) {
        if (x == 0) {
            throw invalid_argument("Ошибка: число равно нулю!");
        }
        return x;
    };

    try {
        checkZero(0);  
    } 
    catch (const exception& e) {
        cerr << e.what() << endl;   
    }

    return 0;
}
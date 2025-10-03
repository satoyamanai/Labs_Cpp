#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n < 0) {
        cerr << "The number must be non-negative." << endl;
        return -1; 
    }

    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;   //求一个数的阶乘
}

int main() {
    int number;
    cout << "Enter a non negative number: ";
    cin >> number;

    unsigned long long fact = factorial(number);
    if (fact != -1) {
        cout << number << " 's factorial is " << fact << endl;
    }

    return 0;
}
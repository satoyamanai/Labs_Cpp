#include <iostream>
#include <stack>
using namespace std;

void decimalToBinary(int n) {  //将10进制转换为2进制
    stack<int> binaryDigits; 

    if (n == 0) {
        cout << "The binary representation : 0" << endl;
        return;
    }

    while (n > 0) {
        binaryDigits.push(n % 2); 
        n /= 2; 
    }

    cout << "The binary representation is : ";
    while (!binaryDigits.empty()) {
        cout << binaryDigits.top(); 
        binaryDigits.pop(); 
    }
    cout << endl;
}

int main() {
    int number;

    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    decimalToBinary(number);

    return 0;
}
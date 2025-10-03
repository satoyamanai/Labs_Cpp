#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter the number for the multiplication table: ";
    cin >> number;

    cout << "The multiplication table for " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " * " << i << " = " << number * i << endl;
    }

    return 0;
}
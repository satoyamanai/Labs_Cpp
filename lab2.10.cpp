#include <iostream>
#include <string>
using namespace std;

int main() {
    char op;
    double num1, num2;
    string input;

    while (true) {
        cout << "Please enter an operation (+, -, *, /) or enter 'q' to quit: ";
        cin >> input;

        if (input == "q" || input == "Q" || input == "quit") {
            cout << "Goodbye!" << endl;
            break;
        }

        if (input.length() != 1 || (input[0] != '+' && input[0] != '-' && input[0] != '*' && input[0] != '/')) {
            cout << "Missing or invalid operator!" << endl;
            continue;
        }

        op = input[0];

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Cannot divide by zero!" << endl;
                }
                break;
            default:
                cout << "Invalid operator!" << endl;
                break;
        }
    }

    return 0;
}
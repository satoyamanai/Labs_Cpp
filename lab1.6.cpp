# include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum, sub, mul, div;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    cout << "The difference of " << num1 << " and " << num2 << " is: " << sub << endl;
    cout << "The product of " << num1 << " and " << num2 << " is: " << mul << endl;
    cout << "The quotient of " << num1 << " and " << num2 << " is: " << div <<endl;
    
    return 0;
}
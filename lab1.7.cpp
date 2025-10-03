# include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, average;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    average = (num1 + num2 + num3) / 3;
    cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " <<average << endl;

    return 0;
}
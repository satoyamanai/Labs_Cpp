#include <iostream>
using namespace std;

int PrintMaxnum(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int PrintMinnum(int num1, int num2, int num3)
{
if (num1 < num2 && num1 < num3)
    {
        return num1;
    }
    else if (num2 < num1 && num2 < num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}
int main()
{  
    int num1, num2, num3;
    cout << "Now enter three different words then u will get the max and min of them." << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    cout << "The max number is " << PrintMaxnum(num1, num2, num3) << endl;
    cout << "The min number is " << PrintMinnum(num1, num2, num3) << endl;
    return 0;
}
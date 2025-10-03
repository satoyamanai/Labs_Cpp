#include <iostream>
#include <string>
using namespace std;

int ReverseNumber(int num) //数字反转
{
    int reversed = 0;

    while (num != 0) 
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return reversed;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversed = ReverseNumber(num);

    cout << "The reversed number is " << reversed << endl;

    return 0;
}
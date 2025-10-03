#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1)
    {
        cout << num << " is not prime." << endl;
        return 0;
    }
    
    if (num == 2)
    {
        cout << num << " is prime." << endl;
        return 0;
    }

    if (num % 2 == 0)
    {
        cout << num << " is even." << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 3; i <= sqrt(num); i += 2 )
    {
        if (num % i == 0)
        {isPrime = false;
        break;
        }
    }
    if (isPrime)
    {
        cout << num << " is prime." << endl;
    }
    else{
        cout << num << " is not prime." << endl;
    }

    return 0;
}
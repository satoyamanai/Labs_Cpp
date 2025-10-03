#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else 
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int PrintFibonacci(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << Fibonacci(i) << " ";
    }
    return 0;
}

int main()
{
    int num;
    cout << "Enter the term number: ";
    cin >> num;
    PrintFibonacci(num);
    return 0;

}
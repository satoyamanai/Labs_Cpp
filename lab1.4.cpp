# include <iostream>
using namespace std;

int main()
{
    int Cel, Fah;
    cout<<"Enter the temperature in Celsius:";
    cin>>Cel;
    Fah = (Cel * 1.8) + 32;
    cout<<"The temperature in Fahrenheit is " << Fah << endl;
    return 0;
}
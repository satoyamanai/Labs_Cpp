#include<iostream>

namespace Mathspace
{
    const double PI = 3.14159;
    int square(int x){return x * x;}

}

int main()
{
    using namespace Mathspace;
    std::cout << "The value of PI is " << PI << std::endl;
    std::cout << "The square of 10 is " << square(10) <<std::endl;
    return 0;
}
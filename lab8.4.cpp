#include <iostream>
using namespace std;

template <typename T, typename U>
auto multiply(T a, U b) {
    return a * b;
}

int main(){
    cout << multiply(3, 4.5) << endl;
    cout << multiply(2.5, 4) << endl;
    return 0;
}
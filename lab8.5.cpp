#include <iostream>
using namespace std;

template <typename T>
T square(T x) {
	return x * x;
}
template <>
int square<int>(int x) {
	cout << "Squaring an int: ";
	return x * x;
}
int main() {
	cout << square(5.5) << endl;		
	cout << square(5) << endl;				
}
#include <iostream>
#include <type_traits>
using namespace std;
template <typename T, typename U>
bool isEqual(T a, U b) {
    static_assert(is_same<T, U>::value, "Error: Types must be the same!");
	return a == b;
}
int main() {
    cout << boolalpha;
	cout << isEqual(5, 5) <<endl;				//	OK
	//cout << isEqual(5,5.0) <<	endl;	//	Ошибка компиляции
	return 0;
}
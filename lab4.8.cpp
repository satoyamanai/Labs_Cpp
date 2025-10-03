#include	<iostream>
#include	<stdexcept>
using namespace std;
class Calculator {
public:
	int add(int a, int b) {
	long long result = static_cast<long long>(a) + b;
        if (result > 1000){
        throw overflow_error("Overflow!");
        }
        return static_cast<int>(result);
	}
};
int main() {
	Calculator	calc;
	try {
		cout << calc.add(500, 600) << endl;
	} catch (const overflow_error& e) {
	  cerr << e.what() << endl;
	}
	return 0;
}
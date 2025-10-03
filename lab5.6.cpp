#include <iostream>
using namespace std;
class Calculator {
public:
    // 加法：两个整数
    int add(int a, int b) {
        return a + b;
    }
    // 加法：两个浮点数
    double add(double a, double b) {
        return a + b;
    }
    // 加法：三个整数
    int add(int a, int b, int c) {
        return a + b + c;
    }
};
int main() {
    Calculator calc;
    // 测试两个整数的加法
    int sum1 = calc.add(5, 10);
    cout << "5 + 10 = " << sum1 << endl;
    // 测试两个浮点数的加法
    double sum2 = calc.add(5.5, 10.2);
    cout << "5.5 + 10.2 = " << sum2 << endl;
    // 测试三个整数的加法
    int sum3 = calc.add(1, 2, 3);
    cout << "1 + 2 + 3 = " << sum3 << endl;
    return 0;
}
#include <iostream>
using namespace std;
class Fraction {
private:
    int numerator;   //分子
    int denominator;   //分母
    
    int gcd(int a, int b) const {   //gcd函数用于计算两个整数的最大公约数
        return b == 0 ? a : gcd(b, a % b);
    }
public:
    
    Fraction(int num, int denom) : numerator(num), denominator(denom) {  //如果分母为0，抛出异常。
        
        if (denominator == 0) {
            throw invalid_argument("Denominator cannot be zero.");
        }
    }
  
    Fraction operator+(const Fraction& other) const {
        
        int commonDenom = denominator * other.denominator;
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        
        Fraction result(newNumerator, commonDenom);
        
        
        int commonDivisor = result.gcd(result.numerator, result.denominator);
        result.numerator /= commonDivisor;
        result.denominator /= commonDivisor;
        return result;
    }
    
    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
};
int main() {
    
    Fraction frac1(1, 2); 
    Fraction frac2(3, 4); 
    
    Fraction result = frac1 + frac2;
    
    cout << "Result of addition: ";
    result.print(); 
    return 0;
}
#include <iostream>
using namespace std;
class Fraction {
private:
    int numerator;   
    int denominator; 
 
    int gcd(int a, int b) const {
        return b == 0 ? a : gcd(b, a % b);
    }
    
    void simplify() {
        int commonDivisor = gcd(numerator, denominator);
        numerator /= commonDivisor;
        denominator /= commonDivisor;
       
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }
public:
 
    Fraction(int num, int denom) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            throw invalid_argument("Denominator cannot be zero.");
        }
        simplify(); 
    }
    
    Fraction operator+(const Fraction& other) const {
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator); 
    }
    
    Fraction operator-(const Fraction& other) const {
        int newNumerator = numerator * other.denominator - other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator); 
    }

    Fraction operator*(const Fraction& other) const {
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator); 
    }
   
    Fraction operator/(const Fraction& other) const {
        if (other.numerator == 0) {
            throw invalid_argument("Cannot divide by zero.");
        }
        int newNumerator = numerator * other.denominator;
        int newDenominator = denominator * other.numerator;
        return Fraction(newNumerator, newDenominator); 
    }

    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
};
int main() {
 
    Fraction frac1(1, 2); // 1/2
    Fraction frac2(3, 4); // 3/4
   
    Fraction sum = frac1 + frac2;
    Fraction difference = frac1 - frac2;
    Fraction product = frac1 * frac2;
    Fraction quotient = frac1 / frac2;

    cout << "Sum: ";
    sum.print(); 
    cout << "Difference: ";
    difference.print(); 
    cout << "Product: ";
    product.print(); 
    cout << "Quotient: ";
    quotient.print(); 
    return 0;
}
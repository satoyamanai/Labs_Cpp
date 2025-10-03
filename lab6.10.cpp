#include <iostream>
using namespace std;
class Matrix {
private:
    int data[2][2]; 
public:
    
    Matrix(int a11, int a12, int a21, int a22) {
        data[0][0] = a11;
        data[0][1] = a12;
        data[1][0] = a21;
        data[1][1] = a22;
    }
    
    Matrix operator+(const Matrix& other) const {
        return Matrix(
            data[0][0] + other.data[0][0], data[0][1] + other.data[0][1],
            data[1][0] + other.data[1][0], data[1][1] + other.data[1][1]
        );
    }
    
    Matrix operator*(const Matrix& other) const {
        return Matrix(
            data[0][0] * other.data[0][0] + data[0][1] * other.data[1][0], 
            data[0][0] * other.data[0][1] + data[0][1] * other.data[1][1], 
            data[1][0] * other.data[0][0] + data[1][1] * other.data[1][0], 
            data[1][0] * other.data[0][1] + data[1][1] * other.data[1][1]  
        );
    }
    
    friend ostream& operator<<(ostream& os, const Matrix& matrix) {
        os << "[" << matrix.data[0][0] << ", " << matrix.data[0][1] << "]" << endl;
        os << "[" << matrix.data[1][0] << ", " << matrix.data[1][1] << "]" << endl;
        return os;
    }
    
    int& operator()(int row, int col) {
        if (row < 0 || row >= 2 || col < 0 || col >= 2) {
            throw out_of_range("Index out of range");
        }
        return data[row][col];
    }
    const int& operator()(int row, int col) const {
        if (row < 0 || row >= 2 || col < 0 || col >= 2) {
            throw out_of_range("Index out of range");
        }
        return data[row][col];
    }
};
int main() {
    Matrix m1(1, 2, 3, 4); 
    Matrix m2(5, 6, 7, 8); 
    
    Matrix sum = m1 + m2;
    cout << "Sum of matrices:" << endl;
    cout << sum;
    
    Matrix product = m1 * m2;
    cout << "Product of matrices:" << endl;
    cout << product;
    
    cout << "Element at (0, 1) in m1: " << m1(0, 1) << endl; 
    m1(0, 1) = 10; 
    cout << "Modified m1:" << endl;
    cout << m1;
    return 0;
}
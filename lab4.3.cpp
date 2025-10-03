#include <iostream>
#include <cmath>
#include <stdexcept>

// Пользовательское исключение, унаследованное от std::runtime_error
class NegativeNumberException : public std::runtime_error {
public:
    NegativeNumberException() 
        : std::runtime_error("Ошибка: нельзя извлечь квадратный корень из отрицательного числа!") {}
};

// Функция для вычисления квадратного корня
double sqrt(double x) {
    if (x < 0) {
        throw NegativeNumberException();  // Теперь предупреждения не будет
    }
    return std::sqrt(x);
}

int main() {
    try {
        std::cout << sqrt(-1) << std::endl;
    } catch (const std::exception& e) {  // Ловим как std::exception
        std::cerr << e.what() << std::endl; //e.what()方法返回一个C风格的字符串，描述异常的具体信息。通过std::cerr输出到标准错误流。
    }
    return 0;
}
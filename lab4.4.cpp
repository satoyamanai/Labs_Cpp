#include <iostream>
#include <stdexcept>

class NegativeNumberException : public std::runtime_error { //定义一种运行的错误，继承自C++标准库的std::runtime_error。
public:
    NegativeNumberException() 
        : std::runtime_error("Ошибка: число не может быть отрицательным!") {}
};

void processNumber(int x) {
    if (x < 0) {
        throw NegativeNumberException();
    }
    if (x > 100) {
        throw std::out_of_range("Ошибка: число не может превышать 100!");
    }
    std::cout << "Число корректно: " << x << std::endl;
}

int main() {
    try {
        processNumber(-5);  
    } catch (const NegativeNumberException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        processNumber(150);  
    } catch (const NegativeNumberException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        processNumber(50);  
    } catch (...) {
        std::cerr << "Неизвестная ошибка!" << std::endl;
    }
    return 0;
}
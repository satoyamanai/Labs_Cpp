#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int width, int height) : width(width), height(height) {
        if (width < 0 || height < 0) {
            throw invalid_argument("Ошибка: ширина и высота не могут быть отрицательными!");
        }
    }

    void print() const {
        cout << "Прямоугольник: ширина = " << width 
                  << ", высота = " << height << endl;
    }
};

int main() {
    try {
        Rectangle rect(-10, 20); 
        rect.print(); 
    } catch (const invalid_argument& e) {
        cerr << e.what() << endl; 
    }

    return 0;
}
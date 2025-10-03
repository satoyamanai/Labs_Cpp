#include <iostream>
using namespace std;
class Rectangle {
private:
    double width;  
    double height; 
public:
    
    Rectangle(double w, double h) : width(w), height(h) {}
    
    friend double calculateArea(const Rectangle& rect);
};

double calculateArea(const Rectangle& rect) {
    return rect.width * rect.height; 
}
int main() {
    
    Rectangle rect(5.0, 3.0);
    
    double area = calculateArea(rect);
    cout << "Area of the rectangle: " << area << endl; 
    return 0;
}
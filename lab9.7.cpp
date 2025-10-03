#include <iostream>
#include <cmath>
using namespace std;

class Drawable {
public:
    virtual void draw() const = 0; 
    virtual double getArea() const = 0; 
    virtual ~Drawable() {} 
};

class Rectangle : public Drawable {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void draw() const override {
        cout << "Draw a rectangle: width = " << width << ", height = " << height << endl;
    }
    double getArea() const override {
        return width * height;
    }
};

class Circle : public Drawable {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    void draw() const override {
        cout << "Draw a circle: radius = " << radius << endl;
    }
    double getArea() const override {
        return M_PI * radius * radius; 
    }
};

void displayDrawableInfo(const Drawable& shape) {
    shape.draw();
    cout << "Area = " << shape.getArea() << endl;
}
int main() {
    Rectangle rect(5.0, 3.0);
    Circle circ(4.0);
    cout << "the rectangle information:" << endl;
    displayDrawableInfo(rect);
    
    cout << endl;
    cout << "the circle information:" << endl;
    displayDrawableInfo(circ);
    return 0;
}
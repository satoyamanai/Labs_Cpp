#include <iostream>
#include <vector>
using namespace std;

class shape{
    public:
    virtual void draw() const {
        cout << "Drawing a shape" << endl;
    }
};

class circle: public shape{
    public:
    void draw() const override {
        cout << "Drawing a circle" << endl;
    }
};

class square: public shape{
    public:
    void draw() const override {
        cout << "Drawing a square" << endl;
    }
};

class triangle: public shape{
    public:
    void draw() const override {
        cout << "Drawing a traingle" << endl;
    }
};

int main(){
    vector<shape*> shapes = {new circle(), new square(), new triangle(), new circle(), new square(), new triangle()};

    cout << "Drawing all shapes" << endl;
    for (const auto& shape : shapes) {
        shape -> draw();
    }
    for (const auto & shape : shapes) {
        delete shape;
    }
    return 0;
}



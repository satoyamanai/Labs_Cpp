#include <iostream>
using namespace std;

class Engine {
private:
    int power; 
public:
    Engine(int p) : power(p) {}
    void start() {
        cout << "Engine started with power: " << power << " HP." << endl;
    }
};
// From inheritance 
class CarWithInheritance : public Engine {
public:
    CarWithInheritance(int power) : Engine(power) {}
    void drive() {
        start(); 
        cout << "Car with inheritance is driving." << endl;
    }
};
// From composition
class CarWithComposition {
private:
    Engine engine; 
public:
    CarWithComposition(int power) : engine(power) {}
    void drive() {
        engine.start(); 
        cout << "Car with composition is driving." << endl;
    }
};
int main() {
    
    CarWithInheritance car1(150);
    car1.drive();
    
    CarWithComposition car2(200);
    car2.drive();
    return 0;
}
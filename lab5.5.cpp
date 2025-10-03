#include <iostream>
using namespace std;

class Engine {
private:
    int power; 
public:

    Engine(int p) : power(p) {}

    void start() {
        cout << "Двигатель запущен с мощностью " << power << " л.с." << endl;
    }
};

class Car {
private:
    Engine engine; 
public:

    Car(int power) : engine(power) {}

    void startCar() {
        engine.start(); 
        cout << "Автомобиль заведён." << endl;
    }
};
int main() {

    Car myCar(150);

    myCar.startCar();
    return 0;
}
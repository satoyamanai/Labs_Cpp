#include <iostream>
using namespace std;

class Vehicle {
    public:
        void start(){
            cout << "Starting vehicle" << endl;
        }
        void stop(){
            cout << "Stopping vehicle" <<endl;
        }
};

class Car : public Vehicle {
    public:
        void honk(){
            cout << "Beep-Beep" << endl;
        }
};

class Bicycle : public Vehicle{
    public:
        void ringbell(){
            cout << "Ring-Ring" << endl;
        }
};

int main(){
    Car my_car;
    cout << "Car operations" << endl;
    my_car.start();
    my_car.honk();
    my_car.stop();
    cout << endl;

    Bicycle my_bike;
    cout << "Bike opeations" << endl;
    my_bike.start();
    my_bike.ringbell();
    my_bike.stop();
    
    return 0;
}


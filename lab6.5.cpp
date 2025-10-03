#include <iostream>
using namespace std;
class Distance {
private:
    double meters; 
public:
    
    Distance(double m) : meters(m) {}
    
    operator double() const {
        return meters / 1000.0; 
    }
    
    void print() const {
        cout << "Distance: " << meters << " meters" << endl;
    }
};
int main() {
    Distance d(1500); 
    d.print(); 
    
    double kilometers = d; 
    cout << "Distance in kilometers: " << kilometers << " km" << endl; 
    return 0;
}
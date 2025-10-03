#include <iostream>
using namespace std;

class Counter {
private:
    int count; 
public:
    
    Counter() : count(0) {}
    
    Counter& operator++() {
        ++count; 
        return *this; 
    }
    
    Counter operator++(int) {
        Counter temp = *this; 
        ++count; 
        return temp; 
    }
    
    void print() const {
        cout << "Count: " << count << endl;
    }
};
int main() {
    Counter counter;
    
    ++counter;
    counter.print(); 
    
    counter++;
    counter.print(); 
    
    ++counter;
    counter.print(); 
    return 0;
}
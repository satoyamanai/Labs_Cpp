#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base constructor" << endl; } 
    ~Base() { cout << "Base destructor" << endl; } 
};

// Derived 类和对象
class Derived : public Base {
    int* data;
public:
    Derived() : Base() {
        data = new int[100]; 
        cout << "Derived constructor" << endl;
    }
    
    ~Derived() {
        delete[] data; // 释放内存
        cout << "Derived destructor" << endl;
    }
};


class BaseVirtual {
public:
    BaseVirtual() { cout << "BaseVirtual constructor" << endl; }
    virtual ~BaseVirtual() { cout << "BaseVirtual destructor" << endl; } 
};

class DerivedVirtual : public BaseVirtual {
    int* data;
public:
    DerivedVirtual() : BaseVirtual() {
        data = new int[100]; 
        cout << "DerivedVirtual constructor" << endl;
    }
    
    ~DerivedVirtual() override {
        delete[] data; 
        cout << "DerivedVirtual destructor" << endl;
    }
};

void demonstrateMemoryLeak() {
    cout << "\n=== Without virtual destructor ===" << endl;
    Base* b = new Derived();
    delete b; 
}

void demonstrateCorrectDestruction() {
    cout << "\n=== With virtual destructor ===" << endl;
    BaseVirtual* bv = new DerivedVirtual();
    delete bv; 
}

int main() {
    demonstrateMemoryLeak();
    demonstrateCorrectDestruction();
    return 0;
}
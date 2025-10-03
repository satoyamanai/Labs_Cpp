#include <iostream>
using namespace std;
// Base class
class Base {
public:
    virtual void foo() { // Virtual method
        cout << "Base foo()" << endl;
    }
    // Declare bar as a virtual function and use final modifier
    virtual void bar() final { // Final method
        cout << "Base bar()" << endl;
    }
};
// Derived class
class Derived : public Base {
public:
    void foo() override { // Override virtual method
        cout << "Derived foo()" << endl;
    }
    // Attempting to override the final method bar will cause a compilation error
    // void bar() override { // This line will cause a compilation error
    //     cout << "Derived bar()" << endl;
    // }
};
int main() {
    Derived d;
    d.foo(); // Call overridden foo()
    d.bar(); // Call Base's bar()
    return 0;
}
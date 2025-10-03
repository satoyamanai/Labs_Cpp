#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(const string& n, int a) : name(n), age(a) {}
    
    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int employeeId;
    string position;
public:
    Employee(const string& n, int a, int id, const string& pos)
        : Person(n, a), employeeId(id), position(pos) {}
    
    void displayEmployeeInfo() const {
        displayInfo(); // Вызов метода базового класса
        cout << "Employee ID: " << employeeId 
             << ", Position: " << position << endl;
    }
};

class Manager : public Employee {
    string department;
public:
    Manager(const string& n, int a, int id, const string& pos, const string& dept)
        : Employee(n, a, id, pos), department(dept) {}
    
    void displayManagerInfo() const {
        displayEmployeeInfo(); 
        cout << "Department: " << department << endl;
    }
};

int main() {

    Manager mgr("John Doe", 35, 1001, "Senior Manager", "IT");
    
    cout << "Accessing different levels:" << endl;

    cout << "\nPerson level:" << endl;
    mgr.displayInfo();
    
    cout << "\nEmployee level:" << endl;
    mgr.displayEmployeeInfo();
    
    cout << "\nManager level:" << endl;
    mgr.displayManagerInfo();
    
    return 0;
}
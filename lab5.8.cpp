#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name; 
    int age;     
public:
 
    Student(string studentName, int studentAge) : name(studentName), age(studentAge) {}
 
    Student(const Student &other) {
        name = other.name; 
        age = other.age;   
    }
  
    void printInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    
    Student student1("Alice", 20);
    cout << "Original Student:" << endl;
    student1.printInfo();
   
    Student student2 = student1; 
    cout << "Copied Student:" << endl;
    student2.printInfo();
    return 0;
}
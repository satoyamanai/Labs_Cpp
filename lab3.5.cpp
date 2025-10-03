#include <iostream>
#include <string>

class Student {
public:
    std::string name;

    Student(const std::string& studentName) : name(studentName) {
        std::cout << "Student " << name << " created." << std::endl;
    }

    ~Student() {
        std::cout << "Student " << name << " destroyed." << std::endl;
    }
};

int main() {

    Student* student = new Student("Alice");
    
    std::cout << "Student name: " << student->name << std::endl;  //箭头符号表示访问该对象的属性或者方法

    delete student;

    return 0;
}
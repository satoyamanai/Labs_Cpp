#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name; 
    int grade;   
public:
    
    Student(string studentName, int studentGrade) : name(studentName), grade(studentGrade) {}
    
    bool operator==(const Student& other) const {
        return grade == other.grade; 
    }
    
    bool operator<(const Student& other) const {
        return name < other.name; 
    }
    
    string getName() const {
        return name;
    }
    
    void printInfo() const {
        cout << "Name: " << name << ", Grade: " << grade << endl;
    }
};
int main() {
    
    Student student1("Alice", 90);
    Student student2("Bob", 85);
    Student student3("Charlie", 90);
   
    if (student1 == student3) {
        cout << student1.getName() << " and " << student3.getName() << " have the same grade." << endl;
    } else {
        cout << student1.getName() << " and " << student3.getName() << " have different grades." << endl;
    }
   
    if (student1 < student2) {
        cout << student1.getName() << " comes before " << student2.getName() << " alphabetically." << endl;
    } else {
        cout << student1.getName() << " does not come before " << student2.getName() << " alphabetically." << endl;
    }
    
    student1.printInfo();
    student2.printInfo();
    student3.printInfo();
    return 0;
}
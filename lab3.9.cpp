#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Student {
public:
    string name;
    //构造函数
    Student(const string& studentName) : name(studentName) { //接受一个const string& 类型的参数studentName，: name(studentName)是成员初始化列表。
        cout << "Student " << name << " created." << endl;
    }
    //析构函数（在对象生命周期结束时自动调用）
    ~Student() { 
        cout << "Student " << name << " destroyed." << endl;
    }
};

int main(){
    unique_ptr<Student> student = make_unique<Student>("Alice");

    return 0;
}

// Использование std::unique_ptr более эффективно и не требует освобождения памяти вручную, она будет освобождена автоматически.
#include <iostream>
#include <cstring> 
using namespace std;
class String {
private:
    char* str; 
    size_t length; 
public:
    
    String(const char* s) {
        length = strlen(s);
        str = new char[length + 1]; 
        strcpy(str, s); 
    }
    
    String(const String& other) {
        length = other.length;
        str = new char[length + 1]; 
        strcpy(str, other.str); 
    }
    
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str; 
            length = other.length;
            str = new char[length + 1]; 
            strcpy(str, other.str); 
        }
        return *this; 
    }
    
    char operator[](size_t index) const {
        if (index >= length) {
            throw out_of_range("Index out of range");
        }
        return str[index]; 
    }
    
    char& operator[](size_t index) {
        if (index >= length) {
            throw out_of_range("Index out of range");
        }
        return str[index]; 
    }

    ~String() {
        delete[] str; 
    }
  
    void print() const {
        cout << str << endl;
    }
};
int main() {
    String myString("Hello, World!");
    
    cout << "Original String: ";
    myString.print();
   
    cout << "Character at index 7: " << myString[7] << endl;

    myString[7] = 'W';
    cout << "Modified String: ";
    myString.print();
    return 0;
}
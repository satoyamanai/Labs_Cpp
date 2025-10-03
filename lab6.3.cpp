#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title; 
    int year;     
public:
   
    Book() : title(""), year(0) {}
    
    friend ostream& operator<<(ostream& os, const Book& book) {
        os << "Title: " << book.title << ", Year: " << book.year;
        return os;
    }
    
    friend istream& operator>>(istream& is, Book& book) {
        cout << "Enter title: ";
        is >> ws; 
        getline(is, book.title); 
        cout << "Enter year: ";
        is >> book.year; 
        return is;
    }
};
int main() {
    Book myBook;
    
    cin >> myBook;
  
    cout << myBook << endl;
    return 0;
}
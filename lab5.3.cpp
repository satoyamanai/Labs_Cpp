#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    Book() {
        title = "";
        author = "";
        year = 0;
    }

    Book(string t, string a, int y) {
        title = t;
        author = a;
        year = y;
    }

    ~Book() {
        cout << "Книга '" << title << "' уничтожена." << endl;
    }

    void print() {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << year << endl;
    }
};

void testDestructor() {

    Book tempBook("The Hobbit", "J.R.R. Tolkien", 1937);
    tempBook.print();
   
}

int main() {

    Book book1("The Lord of the Rings", "J.R.R. Tolkien", 1954);
    book1.print();

    testDestructor();
 
    return 0;
}
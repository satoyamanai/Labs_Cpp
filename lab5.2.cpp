#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    Book() {
        title = "《朝花夕拾》";
        author = "鲁迅";
        year = 1928;
    }

    Book(string t, string a, int y) {
        title = t;
        author = a;
        year = y;
    }

    void print() {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << year << endl;
    }
};

int main() {
    Book book1;
    book1.print();  

    Book book2("The Lord of the Rings", "J.R.R. Tolkien", 1954);
    book2.print();

    return 0;
}
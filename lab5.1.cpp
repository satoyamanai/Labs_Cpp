#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int year;

        void print(){
            cout << "Title: "<< title << ", Author: " << author << ", Year: " << year << endl;
        }
};

int main(){
    Book book1;
    book1.title = "The Lord of the Rings";
    book1.author = "J.R.R. Tolkein";
    book1.year = 1954;
    book1.print();
    return 0;
}
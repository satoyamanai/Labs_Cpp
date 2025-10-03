#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Book 类
class Book {
private:
    string title;  
    string author; 
public:
    
    Book(string bookTitle, string bookAuthor) : title(bookTitle), author(bookAuthor) {}
    
    void displayInfo() const {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

class Library {
private:
    vector<Book> books; 
public:
    
    void addBook(const Book& book) {
        books.push_back(book);
    }
    
    void displayAllBooks() const {
        cout << "Books in the library:" << endl;
        for (const auto& book : books) {
            book.displayInfo();
        }
    }
};
int main() {
    
    Library myLibrary;
    
    Book book1("The Catcher in the Rye", "J.D. Salinger");
    Book book2("To Kill a Mockingbird", "Harper Lee");
    Book book3("1984", "George Orwell");
    
    myLibrary.addBook(book1);
    myLibrary.addBook(book2);
    myLibrary.addBook(book3);
    
    myLibrary.displayAllBooks();
    return 0;
}
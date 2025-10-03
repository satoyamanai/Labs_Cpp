#include<iostream>
#include<memory>
#include<string>
#include<vector>
using namespace std;

namespace Library
{
    class Book
    {
        public:
            string title;
            Book(string title) : title(title) {
                cout << " Book " << title << " created. " << endl;
            }
            ~Book() {
                cout << " Book " << title << " destroyed. " <<endl;
            }
    };
}

int main()
{   vector<shared_ptr<Library::Book>> books;  //shared_ptr是智能指针，自动管理内存。
    books.push_back(make_shared<Library::Book>("IELTS practicing")); //使用make_shared创建Library::Book对象。
    books.push_back(make_shared<Library::Book>("TOFFEL practicing"));
    books.push_back(make_shared<Library::Book>("GRE practicing"));
    
    cout << "\nBook titles: " << endl;
    for (const auto& book : books){
        cout << book->title << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

class Printer{
    public:
    void print() {
        cout << "Printing document ..." << endl;
    }
};

class Scanner{
    public:
    void scan() {
        cout << "Scanning document ..." << endl;
    }
};

class Copier : public Printer, public Scanner{
    public:
    void copy() {
        cout << "Now is time to copy document ..." << endl;
        scan();
        print();
        cout << "Done!" << endl;
    }
};

int main() {
    Copier officeCopier;
    cout << "Testing Printer func:" << endl;
    officeCopier.print();

    cout << "Testing Scanner func:" << endl;
    officeCopier.scan();

    cout << "Testing Copier func:" << endl;
    officeCopier.copy();

    return 0;
}
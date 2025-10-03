#include <iostream>
using namespace std;

class Base {
public:
    int publicVar;      
protected:
    int protectedVar;   
private:
    int privateVar;     
public:
    Base() : publicVar(1), protectedVar(2), privateVar(3) {}
};

class DerivedPublic : public Base {
public:
    void showAccess() {
        cout << "DerivedPublic access:" << endl;
        cout << "publicVar: " << publicVar << endl;         
        cout << "protectedVar: " << protectedVar << endl;   
        // cout << "privateVar: " << privateVar << endl;   
    }
};

class DerivedProtected : protected Base {
public:
    void showAccess() {
        cout << "DerivedProtected access:" << endl;
        cout << "publicVar: " << publicVar << endl;         
        cout << "protectedVar: " << protectedVar << endl;   
        // cout << "privateVar: " << privateVar << endl;   
    }
};

class DerivedPrivate : private Base {
public:
    void showAccess() {
        cout << "DerivedPrivate access:" << endl;
        cout << "publicVar: " << publicVar << endl;         
        cout << "protectedVar: " << protectedVar << endl;   
        // cout << "privateVar: " << privateVar << endl;   
    }
};
int main() {
    DerivedPublic derivedPublic;
    derivedPublic.showAccess();
    DerivedProtected derivedProtected;
    derivedProtected.showAccess();
    DerivedPrivate derivedPrivate;
    derivedPrivate.showAccess();
    // 访问 DerivedPublic 的公共成员
    cout << "Accessing DerivedPublic from main:" << endl;
    cout << "publicVar: " << derivedPublic.publicVar << endl; 
    // cout << "protectedVar: " << derivedPublic.protectedVar << endl; 
    // cout << "privateVar: " << derivedPublic.privateVar << endl; 
    return 0;
}
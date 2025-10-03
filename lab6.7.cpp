#include <iostream>
#include <string>
using namespace std;
class SecretAccess; 
class Secret {
private:
    string data; 
public:
    
    Secret(const string& secretData) : data(secretData) {}
    
    friend class SecretAccess; 
};
class SecretAccess {
public:
    
    void printSecret(const Secret& secret) {
        cout << "Secret data: " << secret.data << endl;
    }
};
int main() {
    Secret mySecret("This is a secret message."); 
    SecretAccess access; 
    access.printSecret(mySecret); 
    return 0;
}
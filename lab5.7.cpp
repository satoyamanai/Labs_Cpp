#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    double balance; 
    static int totalAccounts; 
public:
    string owner; 
   
    BankAccount(string accountOwner) : owner(accountOwner), balance(0.0) {
        totalAccounts++; 
    }
    
    ~BankAccount() {
        totalAccounts--; 
    }

    void deposit(double amount) {  //存款
        if (amount > 0) {
            balance += amount;
            cout << "successful deposit: " << amount << ", current balance: " << balance << endl;
        } else {
            cout << "deposit amount must be greater than 0" << endl;
        }
    }
   
    void withdraw(double amount) {  //取款
        if (amount <= balance) {
            balance -= amount;
            cout << "successful withdrawal: " << amount << ", current balance: " << balance << endl;
        } else {
            cout << "deposit is not enough. " << amount << endl;
        }
    }
 
    double getBalance() const {
        return balance;
    }
   
    static int getTotalAccounts() {
        return totalAccounts;
    }
};

int BankAccount::totalAccounts = 0;
int main() {

    BankAccount account1("Andrea");
    BankAccount account2("Tima");

    account1.deposit(1000);
    account2.deposit(500);

    cout << "Account1 current balance: " << account1.getBalance() << endl;
    cout << "Account2 current balance: " << account2.getBalance() << endl;

    cout << "current total accounts: " << BankAccount::getTotalAccounts() << endl;

    account1.withdraw(300);
    account2.withdraw(600);

    cout << "current total accounts: " << BankAccount::getTotalAccounts() << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    double balance; // 私有字段，账户余额
public:
    string owner; // 公共字段，账户持有人
    // 构造函数
    BankAccount(string accountOwner) : owner(accountOwner), balance(0.0) {}
    // 存款方法
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "successful deposit: " << amount << ", current balance : " << balance << endl;
        } else {
            cout << "deposit amount must be greater than 0." << endl;
        }
    }
    // 取款方法
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "successful withdrawal: " << amount << ", current balance: " << balance << endl;
        } else {
            cout << "insufficient balance: " << amount << endl;
        }
    }
    // 获取当前余额的方法
    double getBalance() const {
        return balance;
    }
};
int main() {
    // 创建一个银行账户
    BankAccount account("Andrea");
    // 存款
    account.deposit(1000);
    
    // 取款
    account.withdraw(500);
    
    // 获取余额
    cout << "current balance: " << account.getBalance() << endl;
    // 尝试取款超过余额
    account.withdraw(600);
    return 0;
}
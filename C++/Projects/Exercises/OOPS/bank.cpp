/* BankAccount Class with Deposit and Withdraw

Write a C++ program to implement a class called BankAccount that has private member variables for account number
and balance. Include member functions to deposit and withdraw money from the account. */
#include <iostream>
#include <string>

class BankAccount
{
private:
    std::string acc_num;
    double balance;

public:
    BankAccount(std::string acc_num, double balance) : acc_num(acc_num), balance(balance) {}

    double deposit(int amount)
    {
        return balance = balance + amount;
    }

    double withdraw(int amount)
    {
        return balance = balance - amount;
    }
};

int main()
{
    BankAccount account_1("12345678", 500.54);
    BankAccount account_2("5678903", 2000);

    double balance_1 = account_1.deposit(500);
    double balance_2 = account_2.withdraw(500);
    std::cout << "Account_1 balance" << balance_1;
    std::cout << "Account_2 balance" << balance_2;
}
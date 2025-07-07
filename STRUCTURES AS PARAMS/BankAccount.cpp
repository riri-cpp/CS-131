#include <iostream>
#include <iomanip>
using namespace std;

struct Person{
    char name[100];
};

struct BankAccount{
    double balance;
    Person accountHolder;
};

BankAccount openBankAccount(struct Person p, double bal){
    BankAccount account;
    account.accountHolder = p;
    account.balance = bal;
    return account;
}

void printAccountDetails(BankAccount acc){
    cout << "Account Holder: " << acc.accountHolder.name << ", Balance: " << fixed << setprecision(2) << acc.balance;
}

int main(){
    Person p1;
    double balance;
    cout << "Enter the name of the bank account holder: ";
    cin.getline(p1.name, 100);
    
    cout << "Enter the balance for " << p1.name << ": ";
    cin >> balance;
    cin.ignore();
    
    BankAccount account = openBankAccount(p1, balance);
    printAccountDetails(account);
    
    return 0;
    
}

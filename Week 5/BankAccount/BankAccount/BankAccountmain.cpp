
#include "BankAccount.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    double with;
    double deposit;
    string name = "dave";
    string ID = "fdskalgfda";
    double balance = 0;
    
    BankAccount bank1(name, ID, balance);
    bank1.getCustomerID();
    bank1.getCustomerName();
    bank1.withdraw(100);
    bank1.deposit(50);
    
    cout << bank1.getCustomerBalance() << endl;
    cout << bank1.getCustomerName() << endl;
    
    
    
    
    
    return 0;
}

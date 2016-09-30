/*************************************************
 ** Author: Alston Godbolt
 ** Date: 1/28/2016
 ** Description: This program contains a class called
 ** BankAccount. This program acccepts user input for name
 ** acount number. This program also calculates the customer balance
 ****************************************************/
 
#ifndef BankAccount_hpp
#define BankAccount_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private: //can only be accessed from inside the class
    string customerName;
    string customerID;
    double customerBalance;
public: //can be accessed from outside the class
    BankAccount(string, string, double);
    string getCustomerName();
    string getCustomerID();
    double getCustomerBalance();
    void withdraw(double);
    void deposit(double);
    
};

#endif /* BankAccount_hpp */

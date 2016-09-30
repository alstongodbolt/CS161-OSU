

#include "BankAccount.hpp"
#include <iostream>
#include <string>
using namespace std;
/************************************************************
 ** Description: constructor that assigns values to the data memebers
 ************************************************************/
BankAccount::BankAccount(string name, string ID, double balance)
{
    customerName = name;
    customerID = ID;
    customerBalance = balance;
}
/***********************************************************
 ** Description: accessor that uses customer name
 ***********************************************************/
string BankAccount::getCustomerName()
{
    return customerName;
}
/**********************************************************
 ** Description: accessor that uses customer ID
 *********************************************************/
string BankAccount::getCustomerID()
{
    return customerID;
}
/**********************************************************
 ** Description: accessor that usese customer balance
 **********************************************************/
double BankAccount::getCustomerBalance()
{
    return customerBalance;
}
/***********************************************************
 ** Description: function calcualtes customer balance after withdraws
 ***********************************************************/
void BankAccount::withdraw(double withdrew)
{
    customerBalance -= withdrew;
}
/**************************************************************
 ** Descrption: function that calcualtes customer balance after deposits
 ****************************************************************/
void BankAccount::deposit(double add)
{
    customerBalance += add;
}
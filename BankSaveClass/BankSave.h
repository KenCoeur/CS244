#ifndef __BankSave_h
#define __BankSave_h
#include<iostream>
using namespace std;
//class BankSave with neccessary fields.
class BankSave
{
   private:
       string accountHolderName;
       int accountNumber;
       string accountType;
       double balance;
       double interestRate;

   public:
   static int counter;
       void deposit(double amount);
       void withdraw(double amount);
       double getInterest();
       void updateBalance();
       void print();
       int getAccountNumber();
       string getAccountHolderName();
       string getAccountType();
       double getBalance();
       double getInterestRate();
       BankSave(string accountHolderName,string accountType,double balance,double interestRate);
       BankSave();

};



//implemntation of BankSave class.
//--------------- BankSave.cpp --------
#include "BankSave.h"
//deposit function which takes amount as parameter
void BankSave:: deposit(double amount)
{
   //check if amount is valid
   if(amount > 0)
   {
       //add amount to balance if valid
       this->balance += amount;

   }
   else
   {
       cout<<"\nError: Invalid amount is passed.\n";
   }
}
//function withdraw to withdraw amount passed from account
void BankSave:: withdraw(double amount)
{
   //check amount is valid
   if(amount > 0)
   {
       //check if account has enough balance
       if(this->balance >=amount)
       {
           //subtract amount from balance if valid
           this->balance -= amount;
       }
       else
       {
           cout<<"\nInsufficient amount of funds in account\n";
       }
   }
   else
   {
       cout<<"\nError: Invalid amount is passed.\n";
   }
}
//return the balance times rate
double BankSave:: getInterest()
{
   return this->balance * this->interestRate;
}
//update balance get interest and add it to the balance
void BankSave:: updateBalance()
{
   this->balance += this->getInterest();
}
//print the account details
void BankSave:: print()
{
   cout<<"\nAccount Details\n\n";
   cout<<"Account Number : "<<accountNumber<<endl;
   cout<<"Account Holder Name : "<<accountHolderName<<endl;
   cout<<"Account Type : "<<accountType<<endl;
   cout<<"Balance : "<<balance<<endl;
   cout<<"Interest Rate : "<<interestRate<<endl;
   cout<<"\n";
}
//getters
int BankSave:: getAccountNumber()
{
   return this->accountNumber;
}
string BankSave:: getAccountHolderName()
{
   return this->accountHolderName;
}
string BankSave:: getAccountType()
{
   return this->accountType;
}
double BankSave:: getBalance()
{
   return this->balance;
}
double BankSave:: getInterestRate()
{
   return this->interestRate;
}

//parameterized constructor.
BankSave::BankSave(string accountHolderName,string accountType,double balance,double interestRate)
{

   this->accountHolderName = accountHolderName;
   this->accountType = accountType;
   this->balance = balance;
   this->interestRate = interestRate;
   this->counter++;
   this->accountNumber = counter;
}
//default construcotr is needed to create an array of BankSave objects
BankSave::BankSave()
{
}
//initilize the counter to 0.
int BankSave::counter = 0;

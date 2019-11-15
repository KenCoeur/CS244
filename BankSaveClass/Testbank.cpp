#include "BankSave.h"
//constant size
#define SIZE 10
int main()
{
   //array of customers
   BankSave accounts[SIZE];
   //adding customers via hard code
   cout<<"Adding 10 customers \n";
   accounts[0] = BankSave("John","savings",100.0,10.0);
   accounts[1] = BankSave("Tony","savings",100.0,10.0);
   accounts[2] = BankSave("Jim","savings",100.0,10.0);
   accounts[3] = BankSave("Jake","savings",100.0,10.0);
   accounts[4] = BankSave("Marina","checking",100.0,2.0);
   accounts[5] = BankSave("Mary","checking",100.0,2.0);
   accounts[6] = BankSave("Malkov","checking",100.0,2.0);
   accounts[7] = BankSave("Mitra","checking",100.0,2.0);
   accounts[8] = BankSave("Yusuf","checking",100.0,2.0);
   accounts[9] = BankSave("Mc clain","checking",100.0,2.0);

   //displaying added customers
   for(int i =0;i<SIZE;i++)
   {
       accounts[i].print();
   }
   //deposite invalid amount
   cout<<"\n---------------------------------------------\n";
   cout<<"\nDepositing -1000 to the account of "<<accounts[0].getAccountHolderName()<<endl;
   accounts[0].deposit(-1000);
   //deposit valid amount
   cout<<"\nDepositing 1000 to the account of "<<accounts[0].getAccountHolderName()<<endl;
   accounts[0].deposit(1000);
   //after that print the account details
   cout<<"\nAfter Transactions , updated account details: "<<endl;
   accounts[0].print();
   cout<<"\n---------------------------------------------\n";

   cout<<"\nWithdrawing -1000 in the account of "<<accounts[1].getAccountHolderName()<<endl;
   //with draw invalid amount
   accounts[1].withdraw(-1000);
   cout<<"\nWithdrawing 1000 in the account of "<<accounts[1].getAccountHolderName()<<endl;
   //withdraw valid amount.
   accounts[1].withdraw(1000);
   //print account
   cout<<"\nAfter Transactions , updated account details: "<<endl;
   accounts[1].print();
   cout<<"\n---------------------------------------------\n";
   return 0;
}

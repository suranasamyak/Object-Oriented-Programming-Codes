#include<iostream>
using namespace std; 
 
int main(){
  double balance = 10000;
  int choice;
  double amount;
  do{
    cout<<"\n\n ---ATM MENU---";
    cout<<"\n 1. Check Balance ";
    cout<<"\n 2. Deposit Money";
    cout<<"\n 3. Withdraw Money";
    cout<<"\n 4. Exit";
    cout<<"\n Enter your choice";
    cin>>choice;
    try{
      if(choice==1){
        cout<<"\n Current balance:Rs."<<balance;      
      }
      else if(choice==2){
        cout<<"\n Enter your amount to be deposited:";
        cin>>amount;
        if(amount<=0)
          throw"Invaid deposit amount";
        balance=balance+amount;
        cout<<"\n Money deposited sucessfully";         
        cout<<"\n New Balance = Rs."<<balance;
        
      }
        else if(choice==3){
          cout<<"\n Enter amount to withdraw:";
          cin>>amount;
          if(amount<=0){
            throw"Invalid Withrawal Amount";          
          }
          if(amount>balance){
            throw"Insufficient Balance";
          }
          balance=balance-amount;
          cout<<"\n Please Collect your cash.";
          cout<<"Remaning Balance = Rs."<<balance;
        }
        else if(choice==4){
          cout<<"\n Thank You For Using ATM";
        }
        else{
          throw"Invalid choice";
        }
      
      
    } 
    catch(const char message){
      cout<<"\n Exception:"<<message;
 
    }   
  }while(choice!=4);
  return 0;
}

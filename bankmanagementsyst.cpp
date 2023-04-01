#include<iostream>
#include <fstream>
 
#include<bits/stdc++.h>

using namespace std;

class bank{
    int balance;
    string name;
    string addr;
    string y;
 public:
    void open_account();
    void deposit_money();
    void withdraw_money();
 void display_account();
};

 void bank :: open_account(){
    cout<<"Enter Your FULL_NAME:"<<endl;
    getline(cin,name);
      cout<<"Enter Your Address:"<<endl;
       getline(cin,addr);
       cout<<"What type of account you want to open: saving(s) or current(c)"<<endl;
       cin>>y;
       cout<<"Enter amount to be deposit:"<<endl;
       cin>>balance;

       cout<<" Your Account is successfully created"<<endl;
    }

    void bank :: deposit_money(){
        int a=-1;
 cout<<"Enter amount you want to deposit:"<<endl;
              cin>>a;
              balance +=a;  //deposit =+
              cout<<"total amount in your bank is \t:"<<balance<<endl;
    }

    void bank :: withdraw_money(){
        float amount;
              cout<<"\n Withdraw :: "<<endl;
              cout<<"Enter Amount to Withdraw ::"<<endl;
              cin>> amount;
              balance+= amount;
              cout<<" Now Total amount left is ::"<<balance;
    }

    void bank:: display_account(){
    cout<<"Your FUll_NAME\t:"<<name<<endl;
     cout<<"Your ADDRESS\t:"<<addr<<endl;
     cout<<"Type of Account\t:"<<y<<endl;
     cout<<" Total Amount deposit in bank "<<balance<<endl;
    }

  int main(){

    int ch,x;
    bank obj;
     do{
    cout<<"1) open Account"<<endl;
    cout<<"2) Deposit money "<<endl;
    cout<<"3) Withdraw money"<<endl;
    cout<<"4) Display Account"<<endl;
     cout<<"5) EXIT"<<endl;
   cout<<"Select the Options from Above\n";
   cin>> ch;
   switch(ch){
     case 1: 
       cout<< "1) Open Account:\n";
      obj.open_account();
      break;
      case 2: 
      cout<< "2) Deposit Money:\n";
      obj.deposit_money();
      break;
      case 3:
      cout<<" 3) Withdraw Money:\n";
      obj.withdraw_money();
      break;
      case 4:
      cout<<" 4) Display Account:\n";
      obj.display_account();
      break;
     case 5:
     if(ch==5){
        exit(1);
     }
     default:
     cout<<"This option does not exist, try again\n";
   }
   cout<<"Do you want to select next option then press :: y\n";
   cout<<"If you want to exit then press :: N \n";
     cin>>x;
     if(x=='N' || x== 'n')
     exit(0);
     } while(x=='y' || x=='Y');
           
      cout<<"Exited successfully\n Thankyou! "<<endl;
    return 0;
}

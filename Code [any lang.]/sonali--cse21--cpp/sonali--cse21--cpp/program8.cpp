#include<iostream>
using namespace std;
class ATM{
    int user;
    int accID = 1234;
    int target=5678;
    double init;
    int trgetbalance;

    public:
    void create();
    void deposit();
    void withdraw();
    void balanceinquiry();
    void transfer();
    void exit();
};

//creation
 void ATM:: create()
{
    int n ;
    string s;

cout<<"enter account type  :"<<"\n"<<"1. SAVINGS ACCOUNT \n 2.CHECKINGS ACCOUNT \n 3.BUSINESS ACCOUNT \n";
cin>>n;
cout<<"enter initial amount \n";
cin>>init;
if(n==1)
s="savings account";
if(n==2)
s="checkings account";
if(n==3)
s="business account";
cout<<"Account succesfully created . "<<"Account ID :"<<accID;
}
//deposit
void ATM::deposit()
{
int deposit,user;
cout<<"Enter Account id"<<"\n";
cin>>user;
cout<<"enter deposit amount \n";
cin>> deposit;
if(user==accID){
init+=deposit;
cout<<"Deposit successful."<<"new balance :"<<init;
}
else
cout<<"invalid details \n";
}
//withdrawal
void ATM::withdraw()
{
int wd,user;
cout<<"Enter Account id"<<"\n";
cin>>user;
cout<<"enter Withdrawal amount \n";
cin>> wd;
if(user==accID)
{
    if(init >=wd){
    init-=wd;
    cout<<"Withdrawal successful."<<"new balance :"<<init;
}
else
cout<<"low balance \n";
}
else
cout<<"invalid details \n";
}
//balance enquiry

void ATM::balanceinquiry()
{
cout<<"Enter Account id"<<"\n";
cin>>user;
if(user==accID){
cout<<"Account balance :"<<init;
}
else
cout<<"invalid details \n";
}

//transfer
void  ATM :: transfer()
{
    int t ,ta;
cout<<" \n enter source ID: \t";
cin>>user;
cout<<" \n enter target id :\t";
cin>>t;
cout<<" \n enter transfer account:\t";
cin>>ta;
if(user==accID)
{
    trgetbalance=ta;
    init-=ta;
    cout<<"Transfer Successful ."<< "source Account balance : \t"<<init;
}
else
cout<<"invalid details";
}

int main(){
    int ch;
    ATM A;
    cout<<"choose the service u need";
    cout<<"\n 1.Create Account\n""\n 2.Deposit \n""\n 3.withdraw\n""\n 4.Balance Enquiry\n""\n 5.transfer \n""\n6.exit \n";
    cin>>ch;
    switch (ch)
    {
       case 1:A.create();
       break; 
       case 2:A.deposit();
       break; 
       case 3:A.withdraw();
       break; 
       case 4:A.balanceinquiry();
       break; 
       case 5:A.transfer();;
       break; 
       case 6:cout<<"\n Thank you for using our ATM system";
       break;
       default: cout<<"invalid choice";
    }
    return 0;
}
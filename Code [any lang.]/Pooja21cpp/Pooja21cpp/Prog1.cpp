#include<iostream>
using namespace std;
void creation()
    {
        string savings,checking,business;
        cout<<"enter account type(1:savings,2:checking,3:business)";
        cin>>savings;
        cout<<"Enter initial balance:"
        cin>>intblnc;
    }
void deposition()
    {
        int id,dpsamnt;
        cout<<"Enter account ID:";
        cin>>id;
        cout<<"Enter deposit amount:";
        cin>>dpsamnt;
        cout<<"Deposit successful. New balance:"<<
    }
void withdrawl()
{
    int id,wdamnt;
    cout<<"Enter account ID";
    cin>>id;
    cout<<"enter withdrawl ammount\n";
    cin>>wdamnt;
    cout<<"Withdrawal successful.New balance:"<<

}
int main()
{
   
    int c;
    creation();
    deposition();
    withdrawl();
    balanceinquiry();
    transfer();
    printf("1. Create account\n2.Deposit\n3.Withdrawl\n4.Balance inquiry\n 5.Transfer\n 6.Exit\n");
    printf("Select an option\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        creation();
        break;
        case 2:
        deposition();
        break;
        case 3:
        withdrawl();
        break;
        case 4:
        balanceinquiry();
        break;
        case 5:
        transfer();
        braek;
        case 6:
        exit();
        break;
        default:
        printf("wrong choice\n");
        break;
    }
    return 0;
}
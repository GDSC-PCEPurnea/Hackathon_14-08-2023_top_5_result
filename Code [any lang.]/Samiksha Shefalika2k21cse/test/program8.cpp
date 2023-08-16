#include <iostream>
using namespace std;
class Bank {
private:
    int acno;
    char name[30];
    long balance;
public:
    void OpenAccount()
    {
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter  Balance: ";
        cin >> balance;
    }
    void ShowAccount()
    {
        cout << "Account Number: " << acno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
    }
    int Search(int);
};

int Bank::Search(int a)
{
    if (acno == a) {
        ShowAccount();
        return (1);
    }
    return (0);
}


int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    Bank C[n];
    int found = 0, a, ch, i;
    /*for (i = 0; i <= n; i++) {
        C[i].OpenAccount();
    }*/
    do {
        cout << "\n\n1:Display All\n2:Deposit\n3:Withdraw\n4:Balance Inquiry5:Exit" << endl; 
        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch) {
        case 1: 
            for (i = 0; i <= n; i++) {
                C[i].OpenAccount();
            }
            break;
        case 2: 
            cout << "Account Number To Deposit Amount? ";
            cin >> a;
            for (i = 0; i <= n; i++) {
                found = C[i].Search(a);
                if (found) {
                    C[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 3: 
            cout << "Account Number To Withdraw Amount? ";
            cin >> a;
            for (i = 0; i <= n; i++) {
                found = C[i].Search(a);
                if (found) {
                    cout<<"valid account";
                    C[i].Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4:
         cout << "Account Number? ";
            cin >> a;
            for (i = 0; i <= n; i++) {
                found = C[i].Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 5:
         cout<<"thank you for using my ATM system";
        default:
            cout << "Wrong Option" << endl;
        }
    } while (ch != 5);
    return 0;
}
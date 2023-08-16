#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the term at which you want the series"<<endl;
    cin>>n;
    cout<<"1+";
    int k=2;
    for (int i = 1; i <n; i++)
    {  
        cout<<"("<<"1/";
        cout<<k*k;
        cout<<")+";
        k++;

    }
    return 0;
    
}
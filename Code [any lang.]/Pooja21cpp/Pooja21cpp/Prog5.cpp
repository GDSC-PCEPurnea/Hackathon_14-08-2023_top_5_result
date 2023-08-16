#include<iostream>
using namespace std;
int main()
{
    int max,n,i,a[20];
    cout<<"enter the number of days/n";
    cin>>n;
    cout<<"enter the stock prices/n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    cout<<"maximum profit="<<max;
    return 0;
}
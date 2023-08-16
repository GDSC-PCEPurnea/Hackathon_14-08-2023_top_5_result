#include<iostream>
using namespace std;
int main()
{
    int a[10],n,m;
    cout<<"Enter the no of days";
    cin>>n;
    cout<<"Enter the profits"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the day after which you want to know the max profit";
    cin>>m;
    int max;
    for(int i=0;i<n;i++)
    {
        if (i<m)
         continue;
        else{
            if(a[i]>a[i+1])
            {
                max=a[i];
            }
        }
    }
    cout<<"Maximum profit="<<max;

    
}
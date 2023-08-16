#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j,store1,store2;
cout<<"enter the number of days:";
cin>>n;
cout<<"enter the stock prices";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
    for (j= i+1; j<n ; j++)
    {
        if(a[i]>a[j])
        {
            store1= a[i];
        }  
        else
        {
            store1=a[j];
        }              
    }  
}
for(i=0;i<n;i++)
{
    for (j= 0; j<n ; j++)
    {
        if(a[j]<a[i])
        {
            store2= a[j];
        }  
        else
        {
            store2=a[i];
        }              
    }  
}
cout<<"value"<<store2;
cout<<"maximum profit:"<<store1-store2;
}
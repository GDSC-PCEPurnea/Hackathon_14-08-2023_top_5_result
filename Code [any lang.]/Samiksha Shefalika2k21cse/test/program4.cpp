#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j;
cout<<"enter the size of array:";
cin>>n;
cout<<"enter the element of array";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
    for (j= i+1; j<n ; j++)
    {
        if(a[j]==a[i])
        {
            cout<<"the duplicate number is:"<<a[i];
        }
    }
    
}

}
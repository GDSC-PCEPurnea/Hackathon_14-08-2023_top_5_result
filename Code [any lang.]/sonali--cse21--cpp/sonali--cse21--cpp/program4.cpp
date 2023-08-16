#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j;
    cout<<"enter the  size of array \n";
    cin>>n;
    cout<<"enter the elements in array \n";
    for( i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<"\t";
    }
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    if(i!=j)
    {
    if(a[i]==a[j])
    cout<<"duplicate number:"<<a[i];
    else
    continue;
    }
}
}
return 0;
}
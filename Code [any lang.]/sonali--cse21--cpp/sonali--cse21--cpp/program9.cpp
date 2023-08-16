#include<iostream>
using namespace std;
int main()
{
    int n,i,num,den;
    float sum=0.0;

cout<<"enter the number";
cin>>n;

for(i=1;i<=n;i++)
{
    if(i!=n)
    cout<<"1"<<"/"<<i*i<<"\t"<<"+";
    else
    cout<<"1"<<"/"<<i*i<<"\t";
}
return 0;
 }


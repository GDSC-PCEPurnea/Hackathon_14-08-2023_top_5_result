#include<iostream>
using namespace std;
int main(){
    int n , a[10],i,max =0,index;
    
    cout<<"enter the number of days";
    cin>>n;
    cout<<"enter the stock prices";
        for(i=0;i<n;i++)
        {
         cin>>a[i];
        }
        max=a[0];
        index=i;

for(i=0;i<n;i++)
{
    if(max<a[i])
    {
        max=a[i];
        index=i;
    }
}
cout<<"maximum pofit:"<<max <<"at index"<< index;

return 0;
}
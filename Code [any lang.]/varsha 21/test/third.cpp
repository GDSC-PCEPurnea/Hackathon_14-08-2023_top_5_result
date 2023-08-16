#include<iostream>
using namespace std;
int main()
{
    char a[10],b[10];
    int length=0;
    cout<<"Enter the string"<<endl;
    cin>>a;
    while (a !='\0')
    {
        length++;
    }
    int j=0;
    int n=length;
    for (int i = 0; i < n; i++)
    {
        b[j]=a[length];
        j++;
        length--;
    }
    cout<<b;
    
}
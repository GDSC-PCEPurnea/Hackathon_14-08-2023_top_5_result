#include<iostream>
using namespace std;
int main()
{
    int a[10],n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements in the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n-i-1; j++)
        {
            if(a[i]=a[j])
            {
                cout<<"Duplicate no:"<<a[i];
                break;
            }
        }
        
    }
    return 0;
}
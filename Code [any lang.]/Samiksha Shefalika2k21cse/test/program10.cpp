#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3] ,i,j;
    cout<<"enter the element of array"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"the matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }

 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }    
    cout<<"the transpose of the matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
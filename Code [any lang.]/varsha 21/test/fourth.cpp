#include<iostream>
using namespace std;
int main()
{
int r,c,a[10][10],t[10][10];
    cout<<"Enter the no of row you want"<<endl;
    cin>>r;
    cout<<"Enter the no of columns you want"<<endl;
    cin>>c;
    cout<<"Enter the elements in matrix"<<endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            t[j][i]=a[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<t[i][j]<<"\t";
        }
        cout<<endl;
    }

    
    
}
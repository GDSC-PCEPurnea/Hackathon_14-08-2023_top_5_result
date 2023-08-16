#include<iostream>
using namespace std;
int main()
{
int x,facto;
cout<<"enter a number";
cin>>x;
int factorial(int y)
{
    y=x;
    if(y==1)
    {
    return 1;
    }
    else if(y==2)
    {
        return 2;
    }
    else
    {
        facto=factorial(y)*factorial(y-1);
    }
return 0;
}
}


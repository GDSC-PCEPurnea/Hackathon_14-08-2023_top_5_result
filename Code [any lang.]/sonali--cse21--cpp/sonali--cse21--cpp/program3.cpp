#include<iostream>
using namespace std;
double f;
int factorial(int n)
{
if(n==1||n==0)
return 1;
else
{
f=n*factorial(n-1);
return f;
}
}
int main()
{
    int n ;
cout<<"enter  a number :\t";  
cin>>n;
f= factorial(n);
cout<<"factorial of "<<n<<" is :\t"<< f;
return 0;
}

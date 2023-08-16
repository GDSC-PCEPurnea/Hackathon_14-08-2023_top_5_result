#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact;
    if (n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    fact= n*(factorial(n-1));
    return fact;

}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    factorial(n);
}
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n >1)
     return   n * factorial(n - 1);
    else
        return 1;  
       
}

int main()
{
    int n,m;
    cout << "Enter the no :";
    cin >> n;
    cout << "Factorial of no " << n << " is ";
    m=factorial(n);
    cout<<m;
    return 0;
}
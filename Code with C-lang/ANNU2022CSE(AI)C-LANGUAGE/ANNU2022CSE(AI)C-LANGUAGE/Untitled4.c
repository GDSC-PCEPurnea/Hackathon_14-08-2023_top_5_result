#include<stdio.h>

 int fibo(int n)
 {
     if(n==0||n==1)
     {
         return n;
     }
     else
     {

      return (fibo(n)=fibo(n-1)+fibo(n-2));
     }
 int main()
{
    int n,z,a=0,b=1;
    printf("Enter the number of terms:");
    scanf("%d",&n);

    z=fibo(n);
    printf("Fibonacci series :");

    printf("%d %d" ,a,b);
    printf("%d",z);
    return 0;

}

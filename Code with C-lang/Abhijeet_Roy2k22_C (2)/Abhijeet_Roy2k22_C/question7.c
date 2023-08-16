#include <stdio.h>
int fib(int a)
{
    int a1 =0,a2=1;
    if(a == 1) return a1;
    if(a == 2) return a2;
    else return (fib(a-1)+ fib(a-2));
}
int main()
{
    int a,i;
    printf("Enter the number of terms : ");
    scanf("%d",&a);
    for(i=1;i <= a;i++){
        printf("%d  ",fib(i));
    }
    return 0;
}
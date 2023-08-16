#include <stdio.h>
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 2) + fib(n - 1);
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", fib(i));
    }
    return 0;
}
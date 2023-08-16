#include <stdio.h>
int main()
{
    int a,b;
    int op;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the operator: ");
    printf("Enter the operator using the below table :");
    printf(" 1 = '+' \n 2 = '-' \n 3 = '*'\n 4 = '/'\n);
    scanf("%d",&op);
    printf("Enter the second number: ");
    scanf("%d",&b);
    switch (op)
    {
    case 1:
        printf("%d",a+b);
        break;
    case 2:
        printf("%d",a-b);
        break;
    case 3:
        printf("%d",a*b);
        break;
    case 4:
        printf("%d",a/b);
        break;
    default: printf("Please enter the correct number for the operator: ");
    
    }
    return 0;
}
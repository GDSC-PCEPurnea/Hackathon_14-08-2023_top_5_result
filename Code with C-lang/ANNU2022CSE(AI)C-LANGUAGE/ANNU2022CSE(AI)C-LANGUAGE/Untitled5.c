#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    printf("Enter operator\n 1 +\n 2 -\n 3 *\n 4 / ");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("\nResult:%d",a+b);
                break;
        case 2: printf("Result:%d",a-b);
                break;
        case 3: printf("Result:%d",a*b);
                break;
        case 4: printf("Result:%d",a/b);
                break;
        default : printf("Invalid operation");

    }
    return 0;
}

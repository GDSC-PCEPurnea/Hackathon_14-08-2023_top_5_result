#include <stdio.h>

int main()
{
    float a;
    float b;

    char sign;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Enter operator(+,-,*,/): ");
    scanf("%s", &sign);
    switch (sign)
    {
    case '+':
        // ans = a + b;
        printf("Result: %f", a + b);
        break;
    case '-':
        // ans = a - b;
        printf("Result: %f", a - b);
        break;
    case '*':
        // ans = a * b;
        printf("Result: %f", a * b);
        break;
    case '/':
        // ans = a / b;
        printf("Result: %f", a / b);
        break;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int row,space,star ,n;
    printf("Enter the height of diamond:");
    scanf("%d",&n);

    printf("The output is:\n");

    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row ;space++)
        {
            printf(" ");

        }
        for(star=1;star<=2*row-1 ;star++)
        {
            printf("*");

        }
        printf("\n");
    }
    for(row=n;row>=1;row--)
    {
        for(space=1;space<=n-row ;space++)
        {
            printf(" ");

        }
        for(star=1;star<=2*row-1 ;star++)
        {
            printf("*");

        }
        printf("\n");

    }
}

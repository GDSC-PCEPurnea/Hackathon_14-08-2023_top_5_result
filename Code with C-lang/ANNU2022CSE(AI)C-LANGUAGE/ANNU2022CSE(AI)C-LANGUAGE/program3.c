#include<stdio.h>
int main()
{
    int n,r,dec=0;
    printf("Enter a binary number:");
    scanf("%d",&n);

    if(n==0||n==1)
    {
        printf("%d",n);

    }
    else
        {
            while(n!=0)
            {
               r=n/10;
               n=n%10;
               dec=dec*10+r;
            }
            printf("Decimal equivalent: %d",dec);
        }
}

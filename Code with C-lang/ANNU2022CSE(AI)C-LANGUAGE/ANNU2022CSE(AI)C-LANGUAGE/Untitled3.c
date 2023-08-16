#include<stdio.h>
int main()
{
    int r,c;
    printf("The output is ");

    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r ;c++)
        {
            printf("%d",c);
        }

    printf("\n");
    }
    return 0;

}

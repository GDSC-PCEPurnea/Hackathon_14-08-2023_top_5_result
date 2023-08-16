#include<stdio.h>
int main()
{
     int n=0;
   printf("Enter the number of term: ");
   scanf("%d",&n);
    int x=0 , y=1 , temp=0;
    printf("Fabonacci Series: %d %d",x,y);

    for(int i=2 ; i<n ; i++)
    {
        temp=x+y;
        printf(" %d",temp);
         x=y;
        y=temp;

    }

    return 0;
}
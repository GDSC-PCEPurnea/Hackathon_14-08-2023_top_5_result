#include<stdio.h>
int main()
{
    int n=0;
   printf("Enter the number of row: ");
   scanf("%d",&n);
   
    for(int i=1 ; i<=n ; i++)
    {
       for (int j = 1; j <=i; j++)
       {
        printf("%d",j);
       }
       for (int j = i-1; j >0; j--)
       {
        printf("%d",j);
       }  
       printf("\n") ;
    }

    return 0;
}
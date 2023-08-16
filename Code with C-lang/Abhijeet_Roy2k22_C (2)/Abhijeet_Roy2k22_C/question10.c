#include <stdio.h>
void main()
{
   printf("This program checks for PRIME NUMBERS\n");
   printf("---------------------------------\n");
   int a,i,res,count=0;
   printf("Enter a number: ");
   scanf("%d",&a);
   for(i = 2;i <= a/2;i++)
   {
       if(a % i == 0)
       count++;
   }
   if(count == 0)
   printf("The number is PRIME");
   else
   printf("The number is NOT PRIME");
}
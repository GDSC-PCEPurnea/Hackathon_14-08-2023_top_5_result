#include <stdio.h>
int main()
{
    int n1=5,n2=6,i,j;
    int arr1[n1];
    int arr2[n2];
    printf("Enter the elements of the first array: ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
        
    }

    printf("Enter the elements of the second array: ");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&arr2[j]);
    }
    return 0;

}
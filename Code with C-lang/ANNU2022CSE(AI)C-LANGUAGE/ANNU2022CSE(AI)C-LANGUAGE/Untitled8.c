#include<stdio.h>
int main()
{
    int n,k;
    int a[10];
    printf("Enter the number of elements:");
    scanf("%d",&n);

    for( int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search for:");
    scanf("%d",&k);
    for( int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("Element found at %d",i);


        }
        else
        {
            printf("Element not found");

        }
    }
    return 0;

}

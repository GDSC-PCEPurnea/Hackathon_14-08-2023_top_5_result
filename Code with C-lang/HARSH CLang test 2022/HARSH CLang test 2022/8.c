#include<stdio.h>
int main()
{   int n,x;
    
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element in the array:\n");
    for (int  i = 0; i < n; i++)
    {
        scanf(" %d",&a[i]);
    }

    printf("Enter a number of elements by linear search:");
    scanf("%d",&x);

    for (int i = 0; i < n; i++)
    {
        if(a[i]==x)
        {
            printf("Element found at index %d",i );
            break;
        }
    }   
    return 0;
}
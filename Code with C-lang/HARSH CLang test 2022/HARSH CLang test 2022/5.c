#include<stdio.h>
int main()
{
    int n,m,x;
    
    printf("Enter the size of an array A:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element in the array:\n");
    for (int  i = 0; i < n; i++)
    {
        scanf(" %d",&a[i]);
    }

    printf("Enter the size of an array B:");
    scanf("%d",&m);
    int b[m];
    printf("Enter the element in the array:\n");
    for (int  i = 0; i < m; i++)
    {
        scanf(" %d",&b[i]);
    }

    printf(" Intersection :");

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i]==b[j])
            {
                    printf("%d ",a[i]);
            }
        }
        
    }
    
    
    return 0;
}
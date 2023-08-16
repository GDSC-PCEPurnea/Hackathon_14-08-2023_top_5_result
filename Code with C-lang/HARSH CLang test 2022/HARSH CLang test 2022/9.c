#include<stdio.h>
int main()
{
    int n,x;
    
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element in the array:\n");
    for (int  i = 0; i < n; i++)
    {
        scanf(" %d",&a[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d",&x);

    printf("Pair with sum %d : ",x);

    for(int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]+a[j]==x)
            {
                    printf("(%d %d) , " ,a[i],a[j]);
            }
        }
        
    }
    
    
    return 0;
}
#include <stdio.h>
int main()
    {
        int n,key,count = 0,i;
        printf("Enter the number of elements: ");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the elements: ");
        for(i = 0;i < n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Enter the element to serach for : ");
        scanf("%d",&key);
        for(i=0;i<=n;i++)
        {
            if(arr[i] == key){
            printf("Element found at index %d",i);
            count++;}
        }
        if(count == 0)
        printf("Element not found");
        return 0;
    }

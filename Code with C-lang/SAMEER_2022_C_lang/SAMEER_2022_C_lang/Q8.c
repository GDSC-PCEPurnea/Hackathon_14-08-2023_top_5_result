#include <stdio.h>
int main()
{
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);
    int temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            temp = i;
        }
    }
    printf("Element found at index: %d", temp);
    return 0;
}
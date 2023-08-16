#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    printf("The entered elements are 4,9,2,7,5,8\n");
    int arr[] = {4, 9, 2, 7, 5,8};
    int key;
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Enter the key: ");
    scanf("%d",&key);
    printf("%dth largest number is %d",key,arr[key-1]);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m;
    printf("Enter the size of array");
    scanf("%d",&m);
    int brr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&brr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==brr[j]){
                printf("%d ",arr[i]);
            }
        }
    }
}
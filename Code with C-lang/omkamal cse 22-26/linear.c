#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element for array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int check;
   printf("Enter the number to check");
   scanf("%d",&check);
   int count=0;
   for(int i=0;i<n;i++){
    if( check==arr[i]){
        printf("%d is present at %d",check,i);
        count++;
        break;
    }

   }
   if(count==0) printf("%d is not present in array",check);
}
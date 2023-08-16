#include<stdio.h>
int main(){
    int n;
    printf("Enter the number to check");
    scanf("%d",&n);
  int count=0;
  for(int i=2;i<n/2;i++){
    if(n%i==0){
        count++;
        break;
    }
  }
  if(count==0 &&n!=1&&n!=0) 
  {printf(" Number is prime");
  }
  else {
  printf("Number is not prime");
  }}
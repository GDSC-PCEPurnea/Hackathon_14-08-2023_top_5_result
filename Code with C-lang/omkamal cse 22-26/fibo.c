#include<stdio.h>
int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    
    else return (fibo(n-1)+fibo(n-2));
}
int main(){
    int n;
    printf("Enter the number of term");
    scanf("%d",&n);
    int a=0;
    int b=1;
    printf(" %d %d ",a,b);
    for(int i=2;i<n;i++){
        printf("%d ",fibo(i));
    }
}
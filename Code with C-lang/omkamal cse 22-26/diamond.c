#include<stdio.h>
int main(){
    int n;
    printf("Enter the odd number for row");
    scanf("%d",&n);
    int mid=n/2+1;
int nst=1;
int nsp=mid-1;
for(int i=1;i<=n;i++){
    if(i<mid){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nsp--;
        nst=nst+2;
    }
      if(i>=mid){
        for(int l=1;l<=nsp;l++){
            printf(" ");
        }
        
        for(int p=1;p<=nst;p++){
            printf("*");
        }
        nsp++;
        nst=nst-2;
    }
    printf("\n");
}
return 0;

}
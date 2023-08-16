#include<stdio.h>
int main(){
    char oper;
    printf("Enter the operator for calculation +,-,*,/");
    scanf("%c",&oper);
    int a,b;
    printf("Enter two number for calculation");
    scanf("%d %d",&a,&b);
    switch(oper){
        case '+': printf("Sum=%d",a+b);
                   break;
         case '-': printf("Substract=%d",a-b);
                   break;
         case '*': printf("Multiple=%d",a*b);
                   break;
        case '/': if(b==0){
               printf("Invalid");
               break;
                             }
                else{printf("div=%d",a/b);
                break;}
        default: printf("Invalid operation");
                 break;

    }

}
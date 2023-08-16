package hackathon;

import java.util.Scanner;

public class factorial {

    static int factorial2(int n){    
        if (n == 0)    
          return 1;    
        else    
          return(n * factorial2(n-1));    
       }    
       public static void main(String args[]){  
        int fact=1;  
        Scanner sc = new Scanner(System.in);
            int n= sc.nextInt();
        
        fact = factorial2(n);   
        System.out.println("Factorial of "+n+" is: "+fact);    
       }  
      }  
       
    // factorial using recursion in java 
    // reverse string using java 
    
    



  


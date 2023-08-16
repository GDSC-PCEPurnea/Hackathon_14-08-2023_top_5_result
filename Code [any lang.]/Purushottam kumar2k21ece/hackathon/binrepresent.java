package hackathon;

import java.util.Scanner;

public class binrepresent {



    public static void dectobin(int n,int pos  ){
        int binnum=0;
        int pow=0;
        int Mynumber=n;
        while(n>0){
             int rem= n%2;
        binnum= binnum +  (rem *(int) Math.pow(10, pow) );

               pow++;
               n=n/2;
        }
        System.out.println("the banary value of "+Mynumber+ " is: "+binnum);

       
        



        for(int i=0;i<binnum;i++ ){
            if(pos==0){
                System.out.println("the "+ i);
                
            }
            else{
                System.out.println("1");
            }

        }
        
    }

    
    public static void main (String args[]){
          Scanner sc= new Scanner(System.in);
          int n= sc.nextInt();
          int pos= sc.nextInt();
       
            


        dectobin(n,pos);

    }


}

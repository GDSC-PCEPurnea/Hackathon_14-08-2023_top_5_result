package hackathon;

import java.util.Scanner;

public class buysell {
    public static int  buyandsell(int arr[]){
        int buyprize= Integer.MAX_VALUE;
        int maxprofit=0;
        for(int i=0;i<arr.length;i++){  
            if(buyprize<arr[i]){
                int profit= arr[i]-buyprize;
                maxprofit=Math.max(maxprofit,profit);
            }
            else{
                buyprize=arr[i];
            }
        }
        return maxprofit;
    }
    public static void main (String args[]){

        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int arr[]= new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }



            

            System.out.println(buyandsell(arr));
        }
    }
}

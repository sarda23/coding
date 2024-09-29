import java.util.*;
public class rotate90{
    public static void main(String []args)
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int [][]arr=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=scn.nextInt();
            }
        }
        // transpose

        for(int i=0;i<n;i++){
            // j will not be from 0 but from i
            for(int j=i;j<n;j++){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }

        // take the reverse of all rows
        // row by row

        for(int i=0;i<n;i++){
            int li=0;
            int ri=n-1;

            while(li<ri){
                int temp=arr[i][li];
                arr[i][li]=arr[i][ri];
                arr[i][ri]=temp;
                li++;
                ri--;
            }
        }

        // now display the rotated array
}
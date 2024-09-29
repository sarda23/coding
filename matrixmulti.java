import java.io.*;
import java.util.*;
public class matrixmulti{
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int r1=scn.nextInt();
        int c1=scn.nextInt();
        int r2=scn.nextInt();
        int c2=scn.nextInt();

        if(c1!=r2)
            System.out.println("invalid input");
        else{
            int [][] one = new int[r1][c1];
            for(int i = 0;i<r1;i++){
                for(int j=0;j<c1;j++){
                    one[i][j]=scn.nextInt();
                }
            }
            int [][] two = new int[r2][c2];
            for(int i = 0;i<r2;i++){
                for(int j=0;j<c2;j++){
                    two[i][j]=scn.nextInt();
                }
            }
            int [][] pro = new int[r1][c2];
            for(int i=0;i<r1;i++){
                for(int j=0;j<c2;j++){
                    for(int k=0;k<c1;k++){
                        pro[i][j]+=one[i][k]*two[k][j];
                    }
                }
            }
            for(int i=0;i<r1;i++){
                for(int j=0;j<c2;j++){
                    System.out.print(pro[i][j]+" ");
                }
                System.out.println();
            }
        }
    }
}
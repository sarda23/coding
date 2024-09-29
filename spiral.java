import java.util.*;
public class spiral{
    public static void main(String args[]){
        Scanner scn = new Scanner(System.in);
        int r = scn.nextInt();
        int c = scn.nextInt();

        int [][] arr = new int[r][c];

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=scn.nextInt();
            }
        }
        int minr=0,minc=0,maxr=r-1,maxc=c-1;
        int tne=r*c,count=0;
        while(count<tne){
            // left wall
            
            for(int i =minr;i<=maxr && count<tne;i++){
                System.out.print(arr[i][minc]+ " ");
                count++;
            }
            minc++;
           System.out.println();
            // bottom wall
            for(int i = minc;i<=maxc && count<tne;i++){
                System.out.print(arr[maxr][i]+" ");
                count++;
            }
          System.out.println();
            maxr--;
            // right wall
            for(int i=maxr;i>=minr && count<tne;i--){
                System.out.print(arr[i][maxc]+" ");
                count++;
            }
            System.out.println();
            maxc--;
            // top wall
            for(int i=maxc;i>=minc && count<tne;i--){
                System.out.print(arr[minr][i]+" ");
                count++;
            }
            System.out.println();
            minr++;
        }
    }
}
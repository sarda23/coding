import java.util.*;
public class substring{
    public static void main(String[] args){
        // Scanner scn = new Scanner(System.in);
        // String s = scn.nextLine();

        // for(int i=0;i<s.length();i++){
        //     for(int j=i+1;j<=s.length();j++)
        //        System.out.println(s.substring(i,j)); 
        // }

        System.out.println("hello"+10+20);

        String s="abc def ghi jkl";
        String[] parts = s.split(" ");
        for(int i=0;i<parts.length;i++)
            System.out.println(parts[i]);
    }
}
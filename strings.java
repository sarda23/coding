import java.util.*;
public class strings{
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);

        // // //String s1="hello";
        // // String s1 = scn.nextLine();
        // // String s2 = scn.next();
        // // System.out.println(s1);
        // // System.out.println(s2);

        String s = scn.nextLine();
        System.out.println(s);
        System.out.println(s.length());


        //char ch = s.charAt(0);
        //System.out.println(ch);

        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            System.out.println(ch);
        }
    }

}
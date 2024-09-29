import java.util.*;
public class triky{
    public static void main(String[] args){
        StringBuilder sb=new StringBuilder("hello");
        System.out.println(sb);

        char ch=sb.charAt(0);
        System.out.println(ch);

        sb.setCharAt(0,'d');
        System.out.println(sb);
    }
}
import java.util.*;
class javabasic{

    public static void fun(){
        int temp=a;
        a=b;
        b=temp;
    }

    static int a =10;   // make global class level
    static int b =20;

    public static void main(String[] args){
        fun();
        System.out.println(a + " " + b);
    }
}
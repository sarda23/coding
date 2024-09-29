import java.util.*;
public class array{
    public static void main(String[] args){
        int arr[];
        arr = new int[5];
        arr[0]=10;
        arr[1]=20;
        arr[2]=30;
        arr[3]=40;
        arr[4]=50;

        int [] two = arr;
        two[3]=3;
        System.out.println(two[3]);
    }
}
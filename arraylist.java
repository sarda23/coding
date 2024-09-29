import java.util.*;
public class arraylist{

        public static void main(String[] args){
            ArrayList<Integer> list = new ArrayList<>();
            System.out.println(list + "->" + list.size());

            list.add(10);
            list.add(20);
            list.add(30);
            list.add(1,1000);
            System.out.println(list);

            int val=list.get(1); // not list[1]
            System.out.println(val);

            list.set(1,2000); // not list[1]=2000;

            ArrayList<String> l2= new ArrayList<>();

            l2.add("hello");
            l2.add("sello");
            l2.add("cello");

            System.out.println(l2  + "  " + l2.size());
        }
}
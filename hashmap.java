import java.util.*;
public class hashmap{
    public static void main(String [] args){
        HashMap<String,Integer> hm = new HashMap<>();

        hm.put("india",140);
        hm.put("usa",32);
        hm.put("russia",15);
        hm.put("china",140);

        

        hm.put("nigeria",20);
        hm.put("usa",40);
        
        System.out.println(hm.get("india"));
        System.out.println(hm.get("gg"));

        System.out.println(hm.containsKey("india"));

        Set<String> keys = hm.keySet();
        
        System.out.println(keys);

        for(String key:hm.keySet()){
            Integer val = hm.get(key);
             System.out.println(key + " " + val); 
        }
    }
}
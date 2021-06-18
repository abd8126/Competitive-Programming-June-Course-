import java.util.Map.Entry;
class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer,Integer> map=new HashMap<>();
       for(int num:nums){
            if(map.containsKey(num))
                map.put(num,map.get(num)+1);
            else
                map.put(num,1);}
       int v=1;

         for(Entry<Integer, Integer> entry: map.entrySet()) {

      if(entry.getValue() == v) {
       return entry.getKey();
    
      
    }}
        
     
         return 0;
} 
}

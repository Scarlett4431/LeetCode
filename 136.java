//136. Single Number
class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer, Integer> map= new HashMap<Integer, Integer>();
        for(int element: nums){
            if(map.containsKey(element)){
                map.put(element,2);
            }
            else{
                map.put(element, 1);
            }
        }
        for(Integer key:map.keySet()){
            if(map.get(key)==1){
                return key;
            }
        }
        return 0;
    }
}
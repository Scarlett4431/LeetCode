//242. Valid Anagram
class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character, Integer> map= new HashMap<Character, Integer>();
        for(int i=0; i< s.length();i++){
            if(!map.containsKey(s.charAt(i))){
                map.put(s.charAt(i),1);
            }
            else{
                int cur= map.get(s.charAt(i));
                map.replace(s.charAt(i),cur+1);
            }
        }
        for(Integer i=0; i<t.length();i++){
            if(!map.containsKey(t.charAt(i))){
                return false;
            }
            else{
                int temp= map.get(t.charAt(i));
                map.replace(t.charAt(i),temp-1);
            }
        }
        for(Integer q: map.values()){
            if(q!=0){
                return false;
            }
        }
        return true;
    }
}
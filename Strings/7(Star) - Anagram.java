class Solution
{    
    //Function is to check whether two strings are anagram of each other or not.
    public static boolean isAnagram(String a,String b)
    {
        if(a.length()!=b.length())
            return false;
        HashMap<Character, Integer> hm = new HashMap<>();
        int sz=a.length();
        char ch;
        for(int i=0;i<sz;i++){
            ch=a.charAt(i);
            if(hm.containsKey(ch))
                hm.replace(ch,hm.get(ch)+1);
            else
                hm.put(ch,1);
        }
        for(int i=0;i<sz;i++){
            ch=b.charAt(i);
            if(hm.containsKey(ch))
                hm.replace(ch,hm.get(ch)-1);
            else
                return false;
        }
        Iterator it = hm.entrySet().iterator();
        int val;
        while(it.hasNext()){
            Map.Entry mapElement =(Map.Entry) it.next();
            val=(int)mapElement.getValue();
            if(val!=0)
                return false;
        }
        return true;
    }
}
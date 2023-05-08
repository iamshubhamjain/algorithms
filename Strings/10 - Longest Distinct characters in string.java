class Solution{
    static int longestSubstrDistinctChars(String S){
        int ans=1,sz=S.length();
        HashMap<Character,Integer> hm = new HashMap<>();
        int i=0,j=1;
        hm.put(S.charAt(i),i);
        char ch;
        while(j<sz){
            ch=S.charAt(j);
            if(hm.containsKey(ch)==true)
                i=hm.get(ch)+1;
            else{
                if(j-i+1>ans){
                    System.out.println(i);
                    ans=j-i+1;
                }
            }
            hm.put(ch,j);
            j++;
        }
        return ans;
    }
}
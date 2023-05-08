class Solution {
    String removeDups(String S) {
        String ans="";
        int sz=S.length();
        int[] alphabet = new int[26];
        char ch;
        for(int i=0;i<sz;i++){
            ch=S.charAt(i);
            if(alphabet[ch-'a']==0)
                ans+=ch;
            alphabet[ch-'a']++;
        }
        return ans;
    }
}
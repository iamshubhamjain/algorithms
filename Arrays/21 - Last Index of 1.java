class Solution {
    public int lastIndex( String s) {
        int ans=-1;
        for(int i=0;i<s.length();i++)
            if(s.charAt(i)=='1')
                ans=i;
        return ans;
    }
}
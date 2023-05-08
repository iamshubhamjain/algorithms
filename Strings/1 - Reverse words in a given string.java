class Solution 
{
    //Function to reverse words in a given string.
    String reverseWords(String S)
    {
        String ans="";
        String[] a1=S.split(".");
        //System.out.println(a1);
        for(int i=a1.length-1;i>0;i--){
            ans+=a1[i];
            ans+=".";
        }
        ans+=a[0];
        return ans;
    }
}
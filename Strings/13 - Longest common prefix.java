class Solution{
    String longestCommonPrefix(String arr[], int n){
        String ans="";
        int totalStrings=arr.length;
        int minSize=arr[0].length();
        String minStr=arr[0];
        for(int i=1;i<totalStrings;i++){
            if(arr[i].length()<minSize){
                minSize=arr[i].length();
                minStr=arr[i];
            }
        }
        char ch;
        int flag=0;
        for(int j=0;j<minSize;j++){
            ch=minStr.charAt(j);
            for(int i=0;i<totalStrings;i++){
                if(arr[i].charAt(j)!=ch){
                    if(ans.equals(""))
                        return "-1";
                    else
                     return ans;
                }
            }
            ans+=ch;
        }
        
        return ans;
    }
}
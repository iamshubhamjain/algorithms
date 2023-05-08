class Solution{
    static String longestPalin(String S){
        String ans="";
        int i,j;
        for(int a=0;a<S.length();a++){
            i=a-1;
            j=a+1;
            while(i>=0&&j<S.length()){
                if(S.charAt(i)==S.charAt(j)){
                    i--;
                    j++;
                }
                else
                    break;
            }
            i++;
            j--;
            if(j-i+1>ans.length()){
                ans="";
                for(int k=i;k<=j;k++)
                    ans+=S.charAt(k);
            }
        }
        
        for(int a=1;a<S.length();a++){
            if(S.charAt(a)!=S.charAt(a-1))
                continue;
            i=a-2;
            j=a+1;
            while(i>=0&&j<S.length()){
                if(S.charAt(i)==S.charAt(j)){
                    i--;
                    j++;
                }
                else
                    break;
            }
            i++;
            j--;
            if(j-i+1>ans.length()){
                ans="";
                for(int k=i;k<=j;k++)
                    ans+=S.charAt(k);
            }
        }
        
        return ans;
    }
}
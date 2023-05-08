class Solution{
    static int countMin(String str1)
    {
        String str2 = "";
        int sz=str1.length();
        for(int i=sz-1;i>=0;i--)
            str2+=str1.charAt(i);
        int[][] lcs = new int[sz+1][sz+1];
        for(int i=0;i<=sz;i++){
            for(int j=0;j<=sz;j++){
                if(i==0||j==0)
                    lcs[i][j]=0;
                else if(str1.charAt(i-1)==str2.charAt(j-1))
                    lcs[i][j]=lcs[i-1][j-1]+1;
                else
                    lcs[i][j]=Math.max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
        return sz-lcs[sz][sz];
    }
}
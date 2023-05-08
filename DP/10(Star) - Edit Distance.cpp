int editDistance(string s, string t) {
        int sz1=s.size(),sz2=t.size();
        int ans[sz1+1][sz2+1];
        for(int i=0;i<=sz1;i++){
            for(int j=0;j<=sz2;j++){
                if(i==0)
                    ans[i][j]=j;
                else if(j==0)
                    ans[i][j]=i;
                else if(s[i-1]==t[j-1])
                    ans[i][j]=ans[i-1][j-1];
                else
                    ans[i][j]=min(ans[i-1][j-1],min(ans[i-1][j],ans[i][j-1]))+1;
            }
        }
        return ans[sz1][sz2];
    }
long long int count( int S[], int m, int n )
    {
       long long int ans[m+1][n+1];
       for(int i=0;i<=m;i++){
           for(int j=0;j<=n;j++){
               if(i==0)
                    ans[i][j]=0;
                else if(j==0)
                    ans[i][j]=1;
                else if(j<S[i-1])
                    ans[i][j]=ans[i-1][j];
                else
                    ans[i][j]=ans[i-1][j]+ans[i][j-S[i-1]];
           }
       }
        return ans[m][n];
    }
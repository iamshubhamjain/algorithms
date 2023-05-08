int equalPartition(int n, int arr[])
    {
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
        if(sum%2)
            return 0;
        bool ans[sum/2+1][n+1];
        for(int i=0;i<=sum/2;i++){
            for(int j=0;j<=n;j++){
                if(i==0){
                    ans[i][j]=true;
                    continue;
                }
                else if(j==0){
                    ans[i][j]=false;
                    continue;
                }
                ans[i][j]=ans[i][j-1];
                if(i>=arr[j-1])
                    ans[i][j]=ans[i][j]||ans[i-arr[j-1]][j-1];
            }
        }
        if(ans[sum/2][n])
            return 1;
        else
            return 0;
    }
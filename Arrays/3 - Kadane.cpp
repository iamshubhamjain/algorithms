int maxSubarraySum(int arr[], int n){
        int ans=arr[0];
        int currSum=arr[0];
        if(currSum<0)
                currSum=0;
        for(int i=1;i<n;i++){
            currSum+=arr[i];
            if(currSum>ans)
                ans=currSum;
            if(currSum<0)
                currSum=0;
        }
        return ans;
        
        
    }
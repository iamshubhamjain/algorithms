int MissingNumber(vector<int>& arr, int n) {
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans^=arr[i];
            ans^=i+1;
        }
        return ans^n;
    }
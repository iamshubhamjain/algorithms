vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        ans.push_back(a[n-1]);
        int maxTillNow=a[n-1];
        for(int i=n-2;i>=0;i--){
            if(a[i]>=maxTillNow){
                ans.push_back(a[i]);
                maxTillNow=a[i];
            }
        }
        int temp,sz=ans.size();
        for(int i=0;i<sz/2;i++){
            temp=ans[i];
            ans[i]=ans[sz-i-1];
            ans[sz-i-1]=temp;
        }
        return ans;
    }
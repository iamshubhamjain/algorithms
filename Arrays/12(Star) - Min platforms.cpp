int findPlatform(int arr[], int dep[], int n)
    {
    	int ans=0;
    	int platforms[2359]={0};
    	for(int i=0;i<n;i++){
    	    ++platforms[arr[i]];
    	    --platforms[dep[i]+1];
    	}
    	for(int i=1;i<2359;i++){
    	    platforms[i]=platforms[i-1]+platforms[i];
    	    ans=max(ans,platforms[i]);
    	}
    	return ans;
    }
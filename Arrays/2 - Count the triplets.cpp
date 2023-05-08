bool isPresent(int arr[],int n,int x){
	    int l=0,h=n-1,mid;
	    while(l<=h){
	        mid=h-(h-l)/2;
	        if(arr[mid]==x)
	            return true;
	       else if(arr[mid]<x)
	        l=mid+1;
	        else
	        h=mid-1;
	    }
	    return false;
	}
	
	int countTriplet(int arr[], int n)
	{
	    int ans=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(isPresent(arr,n,arr[i]+arr[j]))
	                ans++;
	        }
	    }
	    return ans;
	}
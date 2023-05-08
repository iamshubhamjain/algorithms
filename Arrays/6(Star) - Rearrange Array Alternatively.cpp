void rearrange(long long *arr, int n) 
    { 
    	int minIndex=0,maxIndex=n-1;
    	long long maxEle=arr[n-1]+1;
    	
    	for(int i=0;i<n;i++){
    	    if(i%2==0){
    	        arr[i]+=(arr[maxIndex]%maxEle)*maxEle;
    	        maxIndex--;
    	    }
    	    else{
    	        arr[i]+=(arr[minIndex]%maxEle)*maxEle;
    	        minIndex++;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	    arr[i]/=maxEle;
    }
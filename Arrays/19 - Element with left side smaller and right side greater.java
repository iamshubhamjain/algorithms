class Compute {
    public int findElement(int arr[], int n){
        if(n==1)
            return -1;
            
        int[] left = new int[n];
        int[] right = new int[n];
        left[0]=arr[0];
        for(int i=1;i<n;i++)
            left[i]=Math.max(left[i-1],arr[i]);
        right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
            right[i]=Math.min(right[i+1],arr[i]);
        for(int i=1;i<n-1;i++)
            if(arr[i]>=left[i-1]&&arr[i]<=right[i+1])
                return arr[i];
        return -1;
    }
}
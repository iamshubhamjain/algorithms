void reverseInGroups(vector<long long>& arr, int n, int k){
        int groups=n/k;
        if(n%k)
            groups++;
        int i,j;
        long long temp;
        for(int a=0;a<groups;a++){
            i=a*k;
            j=i+k-1;
            if(j>=n)
            j=n-1;
            while(i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j--;
            }
        }
    }
int equilibriumPoint(long long a[], int n) {
        if(n==1)
            return 1;
        if(n==2)
            return -1;
            
        long long left=a[0],right=0;
        for(int i=1;i<n;i++)
            right+=a[i];
        for(int i=1;i<n-1;i++){
            right-=a[i];
            if(left==right)
                return i+1;
            left+=a[i];
        }
        return -1;
    }
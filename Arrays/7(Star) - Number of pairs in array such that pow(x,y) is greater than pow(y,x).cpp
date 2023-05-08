long long getCount(int x,int Y[],int n,int baseValuesInY[]){
        if(x==0)
            return 0;
        if(x==1)
            return baseValuesInY[0];
        int *idx=upper_bound(Y,Y+n,x);
        long long counting=(Y+n) - idx;
        
        counting+=baseValuesInY[0]+baseValuesInY[1];
        
        if(x==2)
            counting-=baseValuesInY[3]+baseValuesInY[4];
        if(x==3)
            counting += baseValuesInY[2];
        return counting;
        
    }
    
    long long countPairs(int X[], int Y[], int m, int n)
    {
       long long ans=0;
       int baseValuesInY[5]={0};
       for(int i=0;i<n;i++)
        if(Y[i]<5)
            baseValuesInY[Y[i]]++;
        sort(Y,Y+n);
        for(int i=0;i<m;i++)
            ans+=getCount(X[i],Y,n,baseValuesInY);
       return ans;
    }
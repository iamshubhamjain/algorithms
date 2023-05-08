public long findMinDiff (ArrayList<Long> a, long n, long m)
    {
        long ans;
        
        Collections.sort(a);
        long i=0,j=m-1;
        ans=a.get(j)-a.get(i);
        i++;
        j++;
        while(j<n){
           if(ans>a.get(j)-a.get(i))
                ans=a.get(j)-a.get(i);
            i++;
            j++;
        }
        
        return ans;
    }
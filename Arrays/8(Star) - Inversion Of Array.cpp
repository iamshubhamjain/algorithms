long long int mergeSortUtils(long long arr[],long long temp[],long long l1,long long h1,long long l2,long long h2){
    long long int inv_cnt=0;
    long long i=l1,j=l2,k=l1;
    while(i<=h1&&j<=h2){
        if(arr[i]<=arr[j])
            temp[k++]=arr[i++];
        else{
            temp[k++]=arr[j++];
            inv_cnt+=(l2-i);
        }
    }
    while(i<=h1)
        temp[k++]=arr[i++];
    while(j<=h2)
        temp[k++]=arr[j++];
    for(long long a=l1;a<=h2;a++)
        arr[a]=temp[a];
    return inv_cnt;
}  

long long int mergeSort(long long arr[], long long temp[],long long l,long long h){
    long long int inv_cnt=0;
    if(l<h){
        long long mid=h-(h-l)/2;
        inv_cnt+=mergeSort(arr,temp,l,mid);
        inv_cnt+=mergeSort(arr,temp,mid+1,h);
        inv_cnt+=mergeSortUtils(arr,temp,l,mid,mid+1,h);
    }
    return inv_cnt;
}

long long int inversionCountUtils(long long arr[], long long n){
    long long temp[n];
    return mergeSort(arr,temp,0,n-1);
} 

long long int inversionCount(long long arr[], long long n)
{
    long long int ans=0;
    ans=inversionCountUtils(arr,n);
    return ans;
}
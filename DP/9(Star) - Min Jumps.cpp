class Solution{
  public:
    int minJumps(int arr[], int n){
        int ans[n],count=0;
        for(int i=0;i<n;i++)
            ans[i]=i;
        for(int i=1;i<n;i++){
            count=0;
            for(int j=0;j<i;j++){
                if(ans[j]!=-1&&i-j<=arr[j]){
                    ans[i]=min(ans[i],ans[j]+1);
                else 
                    count++;
            }
            if(count==i)
                ans[i]=-1;
        }
        return ans[n-1]; 
    }
};
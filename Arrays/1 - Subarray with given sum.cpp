vector<int> subarraySum(int arr[], int n, int s)
    {
        int i=0,j=0,currSum=arr[0];
        while(i<n&&j<n){
            //printf("1\n");
            if(currSum==s){
                //printf("2\n");
                break;
            }
            else if(currSum<s){
                j++;
                currSum+=arr[j];
            }
            else{
                currSum-=arr[i];
                i++;
            }
            if(i>j){
                j=i;
                currSum=arr[i];
            }
        }
        vector<int> ans;
        if(currSum==s){
            ans.push_back(i+1);
            ans.push_back(j+1);
        }
        else
            ans.push_back(-1);
        return ans;
    }
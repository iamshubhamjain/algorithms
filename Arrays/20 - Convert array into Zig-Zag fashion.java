class Solution {
    void zigZag(int arr[], int n) {
        int temp;
        for(int i=1;i<n;i+=2){
            if(arr[i]<arr[i-1]){
                temp=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=temp;
            }
            if(i+1<n&&arr[i]<arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }

}
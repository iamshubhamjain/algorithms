class Solution{
    //Function to find the days of buying and selling stock for max profit.
    ArrayList<ArrayList<Integer> > stockBuySell(int A[], int n) {
        ArrayList<ArrayList<Integer>> ans = new ArrayList<ArrayList<Integer>>();
        int buyDay=0,sellDay;
        for(int i =1;i<n;i++){
            if(A[i]<A[i-1]){
                sellDay=i-1;
                if(buyDay!=sellDay){
                    ArrayList<Integer> temp = new ArrayList<Integer>();
                    temp.add(buyDay);
                    temp.add(sellDay);
                    ans.add(temp);
                }
                buyDay=i;
            }
        }
        sellDay=n-1;
        if(buyDay!=sellDay){
                    ArrayList<Integer> temp = new ArrayList<Integer>();
                    temp.add(buyDay);
                    temp.add(sellDay);
                    ans.add(temp);
                }
        return ans;
    }
}
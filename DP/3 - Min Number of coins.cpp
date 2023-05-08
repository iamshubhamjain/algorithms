class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int> denominations;
        denominations.push_back(1);
        denominations.push_back(2);
        denominations.push_back(5);
        denominations.push_back(10);
        denominations.push_back(20);
        denominations.push_back(50);
        denominations.push_back(100);
        denominations.push_back(200);
        denominations.push_back(500);
        denominations.push_back(2000);
        vector<int> ans;
        for(int i=denominations.size();i>=0&&N;i--){
            while(N>denominations[i]){
                N-=denominations[i];
                ans.push_back(denominations[i]);
            }
        }
        return ans;
    }
};
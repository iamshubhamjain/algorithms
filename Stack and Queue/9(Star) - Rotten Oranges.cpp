class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int ans=0;
        queue<pair<int,pair<int,int>>> q;
        int rows=grid.size();
        int cols=grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==2)
                    q.push(make_pair(0,make_pair(i,j)));
            }
        }
        pair<int,pair<int,int>> p;
        int i,j;
        while(q.size()){
            p=q.front();
            q.pop();
            if(p.first>ans)
                ans=p.first;
            i=p.second.first-1;
            j=p.second.second;
            if(i>=0&&i<rows&&j>=0&&j<cols&&grid[i][j]==1){
                grid[i][j]=3;
                q.push(make_pair(p.first+1,make_pair(i,j)));
            }
            i=p.second.first+1;
            j=p.second.second;
            if(i>=0&&i<rows&&j>=0&&j<cols&&grid[i][j]==1){
                grid[i][j]=3;
                q.push(make_pair(p.first+1,make_pair(i,j)));
            }
            i=p.second.first;
            j=p.second.second-1;
            if(i>=0&&i<rows&&j>=0&&j<cols&&grid[i][j]==1){
                grid[i][j]=3;
                q.push(make_pair(p.first+1,make_pair(i,j)));
            }
            i=p.second.first;
            j=p.second.second+1;
            if(i>=0&&i<rows&&j>=0&&j<cols&&grid[i][j]==1){
                grid[i][j]=3;
                q.push(make_pair(p.first+1,make_pair(i,j)));
            }
        }
        int flag=0;
        for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
        if(grid[i][j]==1)
            flag=1;
        for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
        if(grid[i][j]==3)
            grid[i][j]=1;
        if(flag)
            return -1;
        else
        return ans;
    }
};
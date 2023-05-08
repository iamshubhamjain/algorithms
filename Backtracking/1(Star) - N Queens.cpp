#include <bits/stdc++.h>

using namespace std;

bool isSafe(vector<vector<int>> ans, int row, int col, int n)
{
    int i, j;
    for (i=row,j = col; j >= 0; j--)
        if (ans[i][j])
            return false;

    for (i = row, j = col; i >= 0 && j >= 0; j--, i--)
        if (ans[i][j])
            return false;

    for (i = row, j = col; i < n && j >= 0; j--, i++)
        if (ans[i][j])
            return false;

    return true;
}

void nQueenUtils(vector<vector<int>> &board, vector<vector<int>> &ans, int col, int n, vector<int> &curr)
{
    //printf("2\n");
    if (col == n)
    {
        //printf("3\n");
        ans.push_back(curr);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        //printf("4\n");
        if (isSafe(board, i, col, n))
        {
            board[i][col] = 1;
            curr.push_back(i + 1);
            nQueenUtils(board,ans, col + 1, n, curr);
            curr.erase(--(curr.end()));
            board[i][col] = 0;
        }
    }
}

vector<vector<int>> nQueen(int n)
{
    //printf("1\n");
    vector<vector<int>> ans,board;
    for (int i = 0; i < n; i++){
        vector<int> temp;
        for (int j = 0; j < n; j++)
            temp.push_back(0);
        board.push_back(temp);
    }
    vector<int> curr;
    //printf("1A\n");
    nQueenUtils(board,ans, 0, n, curr);
    return ans;
}

int main(){

    //printf("0\n");
    vector<vector<int>> ans = nQueen(4);
    //printf("10\n");
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
            printf("%d ",ans[i][j]);
        printf("\n");
    }
    return 0;

}

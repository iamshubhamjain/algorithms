class Solution
{
    //Function to return a list of integers denoting spiral traversal of matrix.
    static ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c)
    {
        ArrayList<Integer> ans = new ArrayList<Integer>();
        int i,j,rl=0,rh=r-1,cl=0,ch=c-1,counting=1;
        //ans.add(matrix[0][0]);
        while(rl<=rh&&cl<=ch){
            if(counting%4==1){
                i=rl;
                j=cl;
                while(j<=ch){
                    ans.add(matrix[i][j]);
                    j++;
                }
                rl++;
            }
            else if(counting%4==2){
                i=rl;
                j=ch;
                while(i<=rh){
                    ans.add(matrix[i][j]);
                    i++;
                }
                ch--;
            }
            else if(counting%4==3){
                i=rh;
                j=ch;
                while(j>=cl){
                    ans.add(matrix[i][j]);
                    j--;
                }
                rh--;
            }
            else if(counting%4==0){
                i=rh;
                j=cl;
                while(i>=rl){
                    ans.add(matrix[i][j]);
                    i--;
                }
                cl++;
            }
            counting++;
        }
        return ans;
    }
}
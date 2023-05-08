#include<bits/stdc++.h>

using namespace std;

/*
void minOpsUtils(int n,int currVal,int currCount,int &minCount){
    if(currVal>n)
        return;

    if(currVal==0){
        currCount++;
        currVal=1;
        //minOpsUtils();
    }
    if(currVal==n){
        if(currCount<minCount)
            minCount=currCount;
        return;
    }
    minOpsUtils(n,currVal+1,currCount+1,minCount);
    //currCount--;
    minOpsUtils(n,currVal*2,currCount+1,minCount);
}
*/

int minOps(int n){
    //int minCount=INT_MAX;
    //minOpsUtils(n,0,0,minCount);
    //return minCount;
    int ans=0;
    while(n>1){
        if(n%2==1)
            ans++;
        n/=2;
        ans++;
    }
    return ans+1;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",minOps(n));
    return 0;
}

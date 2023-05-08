/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

bool comparator(val v1, val v2){
    // if(v1.first==v2.first)
    //     return v1.second<v2.second;
    // else 
    //     return v1.first<v2.first;
    return v1.second<v2.second;
}

/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
//Your code here
    sort(p,p+n,comparator);
    int ans[n];
    for(int i=0;i<n;i++)
        ans[i]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(p[j].second<p[i].first)
                ans[i]=max(ans[i],ans[j]+1);
        }
    }
    int finalans=ans[0];
    for(int i=1;i<n;i++)
        if(ans[i]>finalans)
            finalans=ans[i];
    return finalans;
}
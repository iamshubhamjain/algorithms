int maxHeight(int h[],int w[],int l[],int n)
    {
        vector<pair<pair<int,int>,pair<int,int>>> area_h__l_b;
        for(int i=0;i<n;i++){
            area_h__l_b.push_back({{h[i]*w[i],l[i]},{h[i],w[i]}});
            area_h__l_b.push_back({{h[i]*l[i],w[i]},{h[i],l[i]}});
            area_h__l_b.push_back({{l[i]*w[i],h[i]},{l[i],w[i]}});
        }
        sort(area_h__l_b.begin(),area_h__l_b.end());
        vector<int> dp;
        for(int i=0;i<area_h__l_b.size();i++)
            dp.push_back(area_h__l_b[i].first.second);
        for(int i=1;i<area_h__l_b.size();i++){
            for(int j=0;j<i;j++){
                if((area_h__l_b[j].second.first<area_h__l_b[i].second.first&&
                    area_h__l_b[j].second.second<area_h__l_b[i].second.second)
                    ||
                    (area_h__l_b[j].second.first<area_h__l_b[i].second.second&&
                    area_h__l_b[j].second.second<area_h__l_b[i].second.first))
                    dp[i]=max(dp[i],dp[j]+area_h__l_b[i].first.second);
            }
        }
        int ans=dp[0];
        for(int i=0;i<dp.size();i++)
            if(dp[i]>ans)
                ans=dp[i];
                
        return ans;
    }
};
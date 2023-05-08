class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int n=s.size(),i=0;
        
        while(i<n&&s[i]==' ')
            i++;
        if(i==n)
            return 0;
        
        int flag=1;
        if(!isdigit(s[i])){
            if(s[i]=='.'||isalpha(s[i]))
                return 0;
            else{
                if(s[i]=='-')
                    flag=-1;
                else
                    flag=1;
            }
            i++;
        }
        
        long long ans=0;
        for(;i<n;i++){
            if(!isdigit(s[i]))
                break;
            ans=ans*10 + (s[i]-'0');
            if(ans*flag>=INT_MAX)
                return INT_MAX;
            if(ans*flag<=INT_MIN)
                return INT_MIN;
        }
        return ans*flag;
    }
};
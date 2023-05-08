void kmpUtils(string needle, int ns,int lps[]){
        
        int i=1,j=0;
        while(i<ns){
            if(needle[i]==needle[j]){
                lps[i]=j+1;
                i++;
                j++;
            }
            else{
                if(j!=0)
                    j=lps[j-1];
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
    }
    
    int kmp(string haystack,string needle){
        int hs=haystack.size(),ns=needle.size();
        if(ns==0)
            return 0;
        int lps[ns];
        for(int i=0;i<ns;i++)
            lps[i]=0;
        kmpUtils(needle,ns,lps);
        
        int i=0,j=0;
        
        while(i<hs&&j<ns){
            if(haystack[i]==needle[j]){
                i++;
                j++;
            }
            else{
                if(j!=0)
                    j=lps[j-1];
                else
                    i++;
            }
        }
        if(j==ns)
            return i-ns;
        else
            return -1;
    }

int strstr(string s, string x)
{
     return kmp(s,x);
     //Your code here
}
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static int myCompare(string a, string b){
	   // int i=0,j=0;
	   // while(i<a.size()&&j<b.size()){
	   //     if(a[i]-'0'>b[i]-'0')
	   //         return true;
	   //     else if(a[i]-'0'<b[i]-'0')
	   //         return false;
	   //    i++;
	   //    j++;
	   // }
	   // if(i<a.size())
	   //     return false;
	   //else
	   //     return true;
	   string xy=a.append(b);
	   string yx=b.append(a);
	   
	   if(xy.compare(yx)>0)
	        return 1;
	    else 
	    return 0;
	}
	
	
	string printLargest(vector<string> &arr) {
	    string ans="";
	    int sz=arr.size();
	    sort(arr.begin(),arr.end(),myCompare);
	    for(int i=0;i<sz;i++)
	        ans.append(arr[i]);
	    return ans;
	}
};
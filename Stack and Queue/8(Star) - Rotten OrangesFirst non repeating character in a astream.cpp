string FirstNonRepeating(string a){
		   string ans="";
		   
		   list<char> l;
		   unordered_map<char,list<char>::iterator> m;
		   unordered_set<char> s;
		   int sz=a.size();
		   for(int i=0;i<sz;i++){
		       if(m.find(a[i])==m.end()){
		           if(s.find(a[i])==s.end()){
    		           l.push_back(a[i]);
    		           m.insert(make_pair(a[i],--(l.end())));
    		           s.insert(a[i]);
		           }
		       }
		       else{
		              l.erase(m[a[i]]);
		              m.erase(a[i]);
		    }
		       
		       if(l.size())
		            ans+=l.front();
		      else
		            ans+='#';
		   }
		   
		   return ans;
		}
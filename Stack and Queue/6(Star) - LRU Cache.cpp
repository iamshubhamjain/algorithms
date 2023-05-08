class LRUCache
{
    private:
    int cap;
    unordered_map<int,list<pair<int,int>>::iterator> m;
    list<pair<int,int>> l;
    int count=0;
    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        cap=cap;
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if(m.find(key)==m.end())
            return -1;
        else{
            unordered_map<int,list<pair<int,int>>::iterator>::iterator it;
            it=m.find(key);
            int ans=it->second->second;
            l.erase(it->second);
            l.push_front(make_pair(key,ans));
            list<pair<int,int>>::iterator temp=l.begin();
            m.erase(key);
            //temp--;
            m[key]=temp;
            return ans;
        } 
            
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        if(m.find(key)!=m.end()){
            unordered_map<int,list<pair<int,int>>::iterator>::iterator it;
            it=m.find(key);
            l.erase(it->second);
            l.push_front(make_pair(key,value));
            list<pair<int,int>>::iterator temp=l.begin();
            m.erase(key);
            //temp--;
            m[key]=temp;
        }
        else{
            if(count==cap){
                list<pair<int,int>>::iterator temp=l.end();
                temp--;
                m.erase(temp->first);
                l.pop_back();
                count--;
            }
            l.push_front(make_pair(key,value));
            list<pair<int,int>>::iterator a=l.begin();
            //temp--;
            m[key]=a;
            count++;
        }
    }
};
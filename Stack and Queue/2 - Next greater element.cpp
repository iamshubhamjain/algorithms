class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        int sz=x.size();
        char ch;
        for(int i=0;i<sz;i++){
            ch=x[i];
            if(ch==']'){
                if(s.empty()||s.top()!='[')
                    return false;
                else
                    s.pop();
            }
            else if(ch==')'){
                if(s.empty()||s.top()!='(')
                    return false;
                else
                    s.pop();
            }
            else if(ch=='}'){
                if(s.empty()||s.top()!='{')
                    return false;
                else
                    s.pop();
            }
            else
                s.push(ch);
        }
        if(s.size())
            return false;
        else
            return true;
    }

};
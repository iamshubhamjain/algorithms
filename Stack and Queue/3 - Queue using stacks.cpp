//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        if(s1.size()==0)
            return -1;
        int ans;
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        if(s2.size())
        ans=s2.top();
        s2.pop();
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
}
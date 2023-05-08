void QueueStack :: push(int x)
{
        q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    if(q1.size()==0)
        return -1;
    int ans;
    while(q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }
    ans=q1.front();
    if(q1.size())
    q1.pop();
    while(q2.size()){
        q1.push(q2.front());
        q2.pop();
    }
    return ans;
}
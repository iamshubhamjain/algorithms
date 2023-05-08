class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
          if(s.size()==0)
            return -1;
        return minEle;
       }
       
       /*returns poped element from stack*/
       int pop(){
           
          if(s.size()==0)
            return -1;
            int t=s.top(),ans;
            s.pop();
            if(t<minEle){
                ans=minEle;
                minEle=2*minEle-t;
                return ans;
            }
            else
                return t;
       }
       
       /*push element x into the stack*/
       void push(int x){
          
          if(s.size()==0){
            minEle=x;
            s.push(x);
              
          }
          else{
              if(x<minEle){
                  s.push(2*x-minEle);
                  minEle=x;
              }
              else
                s.push(x);
          }
             
        
       }
};
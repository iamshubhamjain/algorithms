class Solution
{
    int getMiddle(Node head)
    {
         int ans;
         Node sp=head,fp=head;
         while(fp.next!=null&&fp.next.next!=null){
             sp=sp.next;
             fp=fp.next.next;
         }
         if(fp.next!=null)
            ans=sp.next.data;
        else
            ans=sp.data;
         return ans;
    }
}
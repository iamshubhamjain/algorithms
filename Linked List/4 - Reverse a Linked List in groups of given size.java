public static void reverseUtils(Node start, Node end)
    {
        Node curr=null,prev=null,n=start;
        while(n!=null){
            curr=n;
            n=n.next;
            curr.next=prev;
            prev=curr;
        }
    }
    
    public static Node reverse(Node node, int k)
    {
        Node newHead = null;
        Node temp=node,start,end,temp2,temp3;
        int i;
        while(temp!=null){
            start=temp;
            i=1;
            while(temp.next!=null&&i<k){
                temp=temp.next;
                i++;
            }
            end=temp;
            temp2=temp.next;
            end.next=null;
            reverseUtils(start,end);
            temp3=start;
            start=end;
            end=temp3;
            if(newHead==null)
                newHead=start;
            end.next=temp2;
            temp=temp2;
        }
        return newHead;
    }
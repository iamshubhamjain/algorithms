class Solution{
    //Function to rotate a linked list.
    public Node rotate(Node head, int k) {
        Node tempHead=head;
        for(int i=1;i<k;i++)
            head=head.next;
        Node temp=head;
        head=head.next;
        if(head==null)
            return tempHead;
        temp.next=null;
        temp=head;
        while(temp.next!=null)
            temp=temp.next;
        temp.next=tempHead;
        return head;
    }
}

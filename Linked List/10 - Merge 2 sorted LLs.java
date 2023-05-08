class LinkedList
{
    //Function to merge two sorted linked list.
    Node sortedMerge(Node head1, Node head2) {
        Node head=null,temp=null;
        
        while(head1!=null&&head2!=null){
            if(head1.data<=head2.data){
                if(head==null){
                    head=head1;
                    temp=head;
                }
                else{
                    temp.next=head1;
                    temp=temp.next;
                }
                head1=head1.next;
            }
            else{
                if(head==null){
                    head=head2;
                    temp=head;
                }
                else{
                    temp.next=head2;
                    temp=temp.next;
                }
                head2=head2.next;
            }
        }
        while(head1!=null){
            temp.next=head1;
            temp=temp.next;
            head1=head1.next;
        }
        while(head2!=null){
            temp.next=head2;
            temp=temp.next;
            head2=head2.next;
        }
        temp.next=null;
        return head; 
   } 
}
class Intersect
{
    //Function to find intersection point in Y shaped Linked Lists.
	int intersectPoint(Node head1, Node head2)
	{
         int l1=0,l2=0;
         Node temp1=head1;
         while(temp1!=null){
             l1++;
             temp1=temp1.next;
         }
         temp1=head2;
         while(temp1!=null){
             l2++;
             temp1=temp1.next;
         }
         Node temp2;
         if(l1>l2){
             temp1=head1;
             while(l1>l2){
                 temp1=temp1.next;
                 l1--;
             }
             temp2=head2;
         }
         else{
             temp1=head2;
             while(l2>l1){
                 temp1=temp1.next;
                 l2--;
             }
             temp2=head1;
         }
         while(temp1!=temp2){
             temp1=temp1.next;
             temp2=temp2.next;
         }
         return temp1.data;
	}
}
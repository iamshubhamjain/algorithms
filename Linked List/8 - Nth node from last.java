class GfG
{
    //Function to find the data of nth node from the end of a linked list.
    int getNthFromLast(Node head, int n)
    {
    	int l=0;
    	Node temp=head;
    	while(temp!=null){
    	    l++;
    	    temp=temp.next;
    	}
    	if(n>l)
    	    return -1;
    	temp=head;
    	for(int i=1;i<=l-n;i++)
    	    temp=temp.next;
    	return temp.data;
    }
}
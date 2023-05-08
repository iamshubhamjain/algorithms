lass Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       Node *temp;
       while(del->next){
           del->data=del->next->data;
           temp=del;
           del=del->next;
       }
       temp->next=NULL;
       free(del);
    }

};
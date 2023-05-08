class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        int a=0,b=0,c=0;
        Node *temp=head;
        while(temp){
            if(temp->data==0)
                a++;
            else if(temp->data==1)
                b++;
            else
                c++;
            temp=temp->next;
        }
        temp=head;
        while(a){
            temp->data=0;
            temp=temp->next;
            a--;
        }
        while(b){
            temp->data=1;
            temp=temp->next;
            b--;
        }
        while(c){
            temp->data=2;
            temp=temp->next;
            c--;
        }
        return head;
        
    }
};
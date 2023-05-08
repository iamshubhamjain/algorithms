class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node *rev(struct Node *head){
        struct Node *prev=NULL,*curr=NULL,*n=head;
        while(n){
            curr=n;
            n=n->next;
            curr->next=prev;
            prev=curr;
        }
        return curr;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first=rev(first);
        second=rev(second);
        struct Node *temp1=first, *temp2=second, *temp3=NULL,*ans=NULL;
        int carry=0,sum;
        while(temp1&&temp2){
            sum=temp1->data+temp2->data+carry;
            if(sum>9){
                carry=sum/10;
                sum%=10;
            }
            else
                carry=0;
            struct Node* temp=new Node(sum);
            if(ans==NULL){
                ans=temp;
                temp3=ans;
            }
            else{
                temp3->next=temp;
                temp3=temp3->next;
                
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1){
            sum=temp1->data+carry;
            if(sum>9){
                carry=sum/10;
                sum%=10;
            }
            else
                carry=0;
            struct Node* temp=new Node(sum);
            if(ans==NULL){
                ans=temp;
                temp3=ans;
            }
            else{
                temp3->next=temp;
                temp3=temp3->next;
                
            }
            temp1=temp1->next;
        }
        while(temp2){
            sum=temp2->data+carry;
            if(sum>9){
                carry=sum/10;
                sum%=10;
            }
            else
                carry=0;
            struct Node* temp=new Node(sum);
            if(ans==NULL){
                ans=temp;
                temp3=ans;
            }
            else{
                temp3->next=temp;
                temp3=temp3->next;
                
            }temp2=temp2->next;
        }
        if(carry!=0){
            struct Node* temp=new Node(carry);
            temp3->next=temp;
        }
        first=rev(first);
        second=rev(second);
        ans=rev(ans);
        return ans;
    }
};
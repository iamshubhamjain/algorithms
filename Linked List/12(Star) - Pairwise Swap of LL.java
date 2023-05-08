class Solution
{
    public:
    
    
    Node* pairWiseSwap(struct Node* curr) 
    {
        if(curr==NULL||curr->next==NULL)
            return curr;
        struct Node *temp=pairWiseSwapUtils(curr->next->next);
        struct Node *temp1=curr->next;
        curr->next->next=curr;
        curr->next=temp;
        return temp1;
    }
};
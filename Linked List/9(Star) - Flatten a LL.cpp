/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */

//////////////////////////////Sol1(Iterative)

// Node *flatten(Node *root)
// {
//   Node *temp, *head1, *head2, *t1,*t2,*l1,*t;
//   head1=root;
//   while(head1->next&&head1->bottom){
//       head2=head1->next;
//       l1=head1;
//       while(head1->bottom&&head1->bottom->data<=head2->data){
//           l1->next=head1->bottom;
//           l1=l1->next;
//           head1->bottom=head1->bottom->bottom;
//           l1->bottom=NULL;
//       }
//       l1->next=head2;
//       t=NULL;
//       temp=NULL;
//       t1=head1->bottom;
//       t2=head2->bottom;
//       while(t1&&t2){
//           if(t1->data<=t2->data){
//               if(t==NULL){
//                   t=t1;
//                   temp=t;
//               }
//               else{
//                   temp->bottom=t1;
//                   temp=temp->bottom;
//               }
//               t1=t1->bottom;
//           }
//           else{
               
//               if(t==NULL){
//                   t=t2;
//                   temp=t;
//               }
//               else{
//                   temp->bottom=t2;
//                   temp=temp->bottom;
//               }
//               t2=t2->bottom;
           
//           }
//       }
//       while(t1){
//           if(t==NULL){
//                 t=t1;
//                 temp=t;
//             }
//             else{
//           temp->bottom=t1;
//           temp=temp->bottom;
//             }
//           t1=t1->bottom;
//       }
//       while(t2){
//           if(t==NULL){
//                   t=t2;
//                   temp=t;
//               }
//               else{
//           temp->bottom=t2;
//           temp=temp->bottom;
//               }
//           t2=t2->bottom;
//       }
//       if(temp)
//         temp->bottom=NULL;
//       head2->bottom=t;
//       head1->bottom=NULL;
//       head1=head2;
//   }
//   l1=head1;
//   while(head1->bottom){
//       l1->next=head1->bottom;
//       l1=l1->next;
//       head1->bottom=head1->bottom->bottom;
//       l1->bottom=NULL;
//   }
//   temp=root;
//   l1=root;
//   t1=root;
//   while(t1){
//       t1->bottom=l1->next;
//       t1=t1->bottom;
//       l1=l1->next;
//   }
//   return root;
// }

///////////////////////////////////////Sol 2(Recursive)

Node *flattenUtils(Node *a,Node *b){
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;
    Node *result=NULL;
    if(a->data<=b->data){
        result=a;
        result->bottom=flattenUtils(a->bottom,b);
    }
    else{
        result=b;
        result->bottom=flattenUtils(a,b->bottom);
    }
    return result;
}

Node *flatten(Node *root)
{
   if(root==NULL||root->next==NULL)
    return root;
    root->next=flatten(root->next);
    root=flattenUtils(root,root->next);
    return root;
}

//Look at geeks solution
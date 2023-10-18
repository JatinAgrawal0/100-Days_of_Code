//GFG POTD-----------------------------------------------28/08/2023
//Remove duplicate element from sorted Linked List



/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
 if(head==NULL || head->next==NULL){
     return head;
 }
 
 Node *temp=head;
 while(temp->next!=NULL)
 {
     
         Node *n=temp->next;
         
         if(temp->data == temp->next->data){
         temp->next=temp->next->next;
       
        delete n;
     }
     else{
         temp=temp->next;
     }
 }
 return head;
}

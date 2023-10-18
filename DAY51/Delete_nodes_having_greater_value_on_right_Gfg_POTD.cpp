//GFG POTD--------------------------------------------------29/08/2023
//Delete nodes having greater value on right

/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
      void rev (Node* &head)
    {
         Node *prev=NULL, *temp=head, *curr=NULL;
         while(temp != NULL)
         {
            curr = temp->next;
            temp->next = prev;
            prev = temp;
            temp = curr;
            
         }
         head = prev;
         
    }
    Node *compute(Node *head)
    {
        // your code goes here
        if(head->next == NULL) return head;
        rev(head);
        Node* next1 = head->next, *prev = head, *ans = NULL;
        
        while(next1!=NULL)
        {
            if(prev->data > next1->data)
            {
                ans = next1->next; 
                next1->next = NULL;
                delete(next1);
                prev->next = ans;
                next1=ans;
            }
            else
            {
                next1 = next1->next;
                prev = prev->next; 
            }
        }
        rev(head);
        return head;
    }
};
   

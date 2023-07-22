//GFG POTD---------------------22/07/2023


/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/





class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     unordered_map<int,int> mp;
     Node*prev=NULL;
     Node*curr=head;
     while(curr!=NULL)
     {
         if(mp[curr->data])
         {
             prev->next=curr->next;
             curr=curr->next;
         }
         else
         {
             mp[curr->data]++;
             prev=curr;
             curr=curr->next;
             
         }
         
     }
     return head;
     
    }
};

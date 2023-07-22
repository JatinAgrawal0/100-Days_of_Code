//GFG POTD--------------------------------------23/07/2023

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        int zro=0,two=0,one=0;
        Node *head2=head;
        Node* ans=head;
        while(head2!=NULL){
            if(head2->data==1) one++;
            if(head2->data==2) two++;
            if(head2->data==0) zro++;
            head2=head2->next;
        }
        while(zro--){
            head->data=0;
            head=head->next;
        }
         while(one--){
            head->data=1;
            head=head->next;
        }
         while(two--){
            head->data=2;
            head=head->next;
        }
        return ans;
     
        
    }
};

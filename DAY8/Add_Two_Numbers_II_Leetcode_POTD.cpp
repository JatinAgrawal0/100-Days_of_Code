//LEETCODE POTD-------------------------------------17/07/2023
class Solution {
public:
 ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        while(head){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

        int c = 0;
        ListNode* ans = new ListNode(), *tail = ans;

        while(l1 || l2 || c){
            int sum = c;
            if(l1) sum += l1->val, l1 = l1->next;
            if(l2) sum += l2->val, l2 = l2->next;
            c = sum / 10;
            tail->next = new ListNode(sum%10);
            tail = tail->next; 
        }
        ans = reverse(ans->next);
        return ans;
    }
};

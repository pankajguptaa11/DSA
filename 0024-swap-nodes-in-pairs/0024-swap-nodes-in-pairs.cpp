class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        
        
        if (!head or !head->next) return head;
        ListNode *curr = head, *next = head->next;
        
        while (next and next->next)
        {
            
            
                    swap (curr->val, next->val);
        curr = curr-> next->next,next = next->next->next;
        
        }
        if (curr and next) swap(curr->val, next->val);
        return head;
    }
};
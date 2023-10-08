class Solution {
public:
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *a = nullptr;
        short int p = 0;
        int temp = 0;
        for (int i = 0; l1 != nullptr || l2 != nullptr; i++) {
            if (l1 != nullptr) {   
                ListNode *a2 = new ListNode;
                a2 -> val = l1 -> val;
                l1 = l1 -> next;
                a2 -> next = a;
                a = a2;
            } else if (l2 != nullptr && l1 == nullptr) {
                p =1;
                ListNode *a2 = new ListNode;
                a2 -> val = l2 -> val;
                l2 = l2 -> next;
                a2 -> next = a;
                a = a2;
            }
            if (l2 != nullptr && p == 0) {
                a -> val += l2 -> val;
                l2 = l2 -> next;
            } else p = 0;
            cout << a -> val << endl;
            a -> val += temp;
            temp = 0;
            if (a -> val >= 10) {
                temp = a -> val / 10;
                a -> val = a -> val % 10;
            }
        }
        if (temp != 0) {
            ListNode *a2 = new ListNode;
            a2 -> val = temp;
            a2 -> next = a;
            a = a2;
        }
        ListNode *b = nullptr;
        while (a != nullptr) {
            ListNode *temp = a -> next;
            ListNode *b2 = new ListNode;
            b2 -> val = a -> val;
            b2 -> next = b;
            b = b2;
            delete a;
            a = temp;
        }
        return b;
    }
};
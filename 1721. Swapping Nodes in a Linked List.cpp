class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *left = head;
        ListNode *right = head;

        for(int i = 0; i < k-1; ++i)
        {
            right = right->next;
        }

        ListNode *leftNode = right;
        
        while(right->next != NULL)
        {
            right = right->next;
            left = left->next;
        }
        swap(leftNode->val, left->val);
        return head;
    }
};

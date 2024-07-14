// Ques: Leetcode[203]

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *curr = head;
        while(curr && curr->val == val){
            curr = curr->next;
        }
        head = curr;
        while(curr){
            if(curr->next && curr->next->val == val)
            curr->next = curr->next->next;
            else curr = curr->next;
        }
        return head;
    }
};
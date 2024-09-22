/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* l3 = new ListNode();
        ListNode* temp = l3;
        while (l1 || l2 || carry!=0){
            temp->val += carry;
            if(l1){
                temp->val += l1->val;
                l1 = l1->next;
            }
            if(l2){
                temp->val += l2->val;
                l2 = l2->next;
            }
            carry = temp->val/10;
            temp->val = temp->val%10;
            if (l1 || l2 || carry!=0){
                temp->next = new ListNode();
                temp = temp->next;
            }
        }
        return l3;
    }
};
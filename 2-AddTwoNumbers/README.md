# 2. Add Two Numbers

**Difficulty: Medium**

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

---

**Example 1:**

	Input: l1 = [2,4,3], l2 = [5,6,4]
	Output: [7,0,8]
	Explanation: 342 + 465 = 807.

**Example 2:**

	Input: l1 = [0], l2 = [0]
	Output: [0]

**Example 3:**

	Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
	Output: [8,9,9,9,0,0,0,1]

# My Solution:

Runtime: 12ms

**Beats: 94.88% of solutions**

Memory: 77.38 mb

**Beats: 89.89% of solutions**

```C++
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
```


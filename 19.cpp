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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // My approach - requires two traversal
        /*
        ListNode* dummy = new ListNode(-1);
        dummy->next=head;

        int count = 0;
        ListNode* c = head;
        while(c!=nullptr)
        {
            c=c->next;
            count++;
        }

        int required = count-n;
        ListNode* curr = dummy;
        while(required>0)
        {
            curr=curr->next;
            required--;
        }
        if(curr==dummy)
        {
            return dummy->next->next;
        }
        curr->next=curr->next->next;

        return dummy->next;
        */
        ListNode* dummy = new ListNode(-1);
        dummy->next=head;
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        while(n)
        {
            fast=fast->next;
            n--;
        }
        while(fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;


        return dummy->next;
        
    }
};
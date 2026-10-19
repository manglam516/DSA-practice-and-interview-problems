/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        //This approach alters the value at linked list, which should not be preferable.
        /*ListNode* curr = head;

        while(curr!=nullptr)
        {
            if(curr->val==INT_MIN) return true;
            else
            {
                curr->val=INT_MIN;
                curr=curr->next;
            }
        }

        return false;
        */

        //Floyds Cycle Detection Algorithm(NO altering in LL)

        ListNode* slowptr = head;
        ListNode* fastptr = head;

        while(fastptr!=nullptr && fastptr->next!=nullptr)
        {
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;

            if(slowptr==fastptr) return true;
        }
        return false;
    }
};
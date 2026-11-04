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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* prior = dummy;
        
        while(true)
        {
            ListNode* check = prior;
            for(int i =0;i<k;i++)
            {
                check=check->next;
                if(check==nullptr)
                {
                    return dummy->next;
                }
            }
            ListNode* after = check->next;

            
            ListNode* curr = prior->next;
            ListNode* prev = after;
            while(curr!=after)
            {
                ListNode* nex = curr->next;
                curr->next=prev;
                prev=curr;
                curr=nex;
            }
            ListNode* oldStart = prior->next; //store the old start
            prior->next = prev; //prior connects to new start of the group

            
            prior = oldStart; // old start now acts as prior for the next group
        }

        return dummy->next;
        
    }
};
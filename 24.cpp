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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }

       
        ListNode* dummy = new ListNode(-1);
        dummy->next=head;
        
        ListNode* prev=head;
        ListNode* curr=head->next;
        ListNode* prior = dummy;

        while(curr!=nullptr)
        {
            ListNode* nex = curr->next;
            curr->next=prev;
            prev->next=nex;
            prior->next=curr;
            
            if(nex==nullptr || nex->next==nullptr)
            {
                break;
            }
            prior=prev;
            prev=nex;
            curr=nex->next;
        }

        return dummy->next;
        
    }
};
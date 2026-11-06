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
    ListNode* partition(ListNode* head, int x) {

        ListNode* dummy1= new ListNode(-101);
        ListNode* dummy2= new ListNode(-102);
        ListNode* l=dummy1;
        ListNode* r=dummy2;

        ListNode* curr = head;

        while(curr!=nullptr)
        {
            if(curr->val<x)
            {
                l->next=curr;
                l=l->next;
                curr=curr->next;
            }
            else
            {
                r->next=curr;
                r=r->next;
                curr=curr->next;
            }
        }
        r->next=nullptr;
        l->next=dummy2->next;
        return dummy1->next;
        
    }
};
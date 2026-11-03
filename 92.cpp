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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        //SOLVED IT BY MYSELF IN FIRST ATTEMPT - USED DUMMY NODE AND APPLIED THE CORRECT LOGIC ON SUBLIST!!!!!

        ListNode* dummy = new ListNode(-501);
        dummy->next=head;
        
        ListNode* prior=dummy;
        int iter = 1;
        while(iter<left)
        {
            prior=prior->next;
            iter++;
        }
        ListNode* after=prior;
        while(iter<=(right+1))
        {
            after=after->next;
            iter++;
        }
        


        ListNode* curr=prior->next;
        ListNode* prev= after;
        int count = left;
        while(count<=right)
        {
            
            ListNode* nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            count++;
        }
        prior->next = prev;

        return dummy->next;

        

        
    }
};
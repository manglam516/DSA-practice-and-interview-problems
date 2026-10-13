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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==nullptr || head->next==nullptr) return head;

        ListNode* curr = head;
        ListNode* move = head->next;

        while(move!=nullptr)
        {
            if(curr->val!=move->val)
            {
                curr->next=move;
                curr=curr->next;
            }
            move=move->next;
        }
        curr->next=nullptr;
        return head;
        
    }
};
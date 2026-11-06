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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
            ListNode* dummy = new ListNode(-1);
            int carry = 0;
            ListNode* curr1=l1;
            ListNode* curr2=l2;
            ListNode* res=dummy;

            while(curr1 || curr2 || carry)
            {
                
                int sum = carry;
                if(curr1)
                {
                    sum+=curr1->val;
                    curr1=curr1->next;
                }
                if(curr2)
                {
                    sum+=curr2->val;
                    curr2=curr2->next;
                }
                {
                    carry=sum/10;
                    ListNode* temp = new ListNode(sum%10);
                    res->next=temp;
                }
                
                res=res->next;
            }
            


            return dummy->next;
    }
};
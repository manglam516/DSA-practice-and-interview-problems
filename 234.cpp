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
    bool isPalindrome(ListNode* head) {

        //My approach - uses extra space;
        /*
        vector<int> v;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }

        int left = 0;
        int right = v.size()-1;
        while(left<right)
        {
            if(v[left]!=v[right])
            {
                return false;
            }
            left++;
            right--;

        }

        return true;
        */
        // better approach : middle+reverse+compare

        //finding the middle
        auto slow = head;
        auto fast = head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;

        }
        
        //reversing the second half
        ListNode* curr = slow;
        ListNode* prev = nullptr;
        while(curr)
        {
            auto nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }

        //compare

        auto first = head;
        auto second = prev;
        while(second)
        {
            if(first->val!=second->val)
            {
                return false;
            }
            first=first->next;
            second=second->next;

        }
        return true;
    }
};
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        // Custom Comparator to compare the list values
        
        auto cmp = [](ListNode* a, ListNode* b)
        {
            return a->val > b->val;
        };

        priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> pq(cmp);

        //push first element of all the list
        for(auto x : lists)
        {
            if(x!=nullptr)
            {
                pq.push(x);
            }
        }
        // use the top element,remove it from heap, and push its next node into the heap
        while(!pq.empty())
        {
            ListNode* node = pq.top();
            pq.pop();
            curr->next = node;
            curr=curr->next;
            if(node->next!=nullptr)
            {
                pq.push(node->next);
            }
        }

        return dummy->next;


       
        
    }
};
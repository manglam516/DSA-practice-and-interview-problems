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
        
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //MY INITIAL APPROACH - Store the address of all the visited nodes, then look it up to find if we have come to an address which is already stored. If yes, then thats the intersection, if no, and all the elements are traversed, then no intersection.
        /*
        vector<ListNode*> address;

        ListNode* currA=headA;
        ListNode* currB=headB;

        while(currA!=nullptr && currB!=nullptr)
        {   
            if(find(address.begin(),address.end(),currA)!=address.end())
            {
                return currA;
            }
            else
            {
                address.push_back(currA);
            }
            currA=currA->next;
            if(find(address.begin(),address.end(),currB)!=address.end())
            {
                return currB;
            }
            else
            {
                address.push_back(currB);
            }
            currB=currB->next;



            
        }
        while(currA!=nullptr)
        {
            if(find(address.begin(),address.end(),currA)!=address.end())
            {
                return currA;
            }
            currA=currA->next;
        }
        while(currB!=nullptr)
        {
            if(find(address.begin(),address.end(),currB)!=address.end())
            {
                return currB;
            }
            currB=currB->next;
        }

        return nullptr;
        */

        //Switching head approach - constant space!

        ListNode* currA=headA;
        ListNode* currB=headB;

        while(currA!=currB)
        {
            currA = (currA==nullptr) ? headB : currA->next;
            currB = (currB==nullptr) ? headA : currB->next;
        }

        return currA;

        
    }
};
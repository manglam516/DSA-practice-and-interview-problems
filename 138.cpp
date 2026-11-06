/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        //Couldnt solve this myself
        //Hash Map approach - Old node mapped to new node in one traversal(only node creation), and then connect next and random in second traversal.
        unordered_map<Node*,Node*> mp;
        Node* curr = head;
        while(curr!=nullptr)
        {
            Node* temp = new Node(curr->val);
            mp[curr]=temp;
            curr=curr->next;
        }
        curr = head;
        while(curr!=nullptr)
        {
            mp[curr]->next =  mp[curr->next];
            mp[curr]->random =  mp[curr->random];
            curr=curr->next;
        }
        
        return mp[head];
        
    }
};
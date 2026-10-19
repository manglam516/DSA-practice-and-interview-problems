/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) 
    {
        vector<int> v1,v2;
        preorder(root->left,v1);
        neworder(root->right,v2);
        return v1==v2;
    }
    void preorder(TreeNode *root,vector<int> &v)
    {
        if(root==NULL)
        {
            v.push_back(INT_MIN);
            return;
        }
        v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);

    }
    void neworder(TreeNode *root,vector<int> &v)
    {
        if(root==NULL)
        {
            v.push_back(INT_MIN);
            return;
        }
        v.push_back(root->val);
        neworder(root->right,v);
        neworder(root->left,v);

    }
    };
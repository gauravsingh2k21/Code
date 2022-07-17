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
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        return helper(root,val);
        
    }
    
    TreeNode * helper(TreeNode *root,int val)
    {
        if(root==nullptr)
            return nullptr;
        
        if(root->val ==val)
            return root;
        auto root1 = root->val > val ? helper(root->left,val) : helper(root->right,val);
        
        return root1;
    }
};
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
    TreeNode* insertIntoBST(TreeNode* root, int val)
    {
        return helper(root,val);
    }
    
    TreeNode* helper(TreeNode *root, int val)
    {
        if(root==nullptr)
        {
            TreeNode *temp = new TreeNode(val);
            return temp;
        }
        
        if(root->val<val)
        {   
            root->right = helper(root->right,val);
        }    
        
        if(root->val>val)
        {    
            root->left = helper(root->left,val);
        }    
        
        return root;
    }
};
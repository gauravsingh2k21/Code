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
    int deepestLeavesSum(TreeNode* root)
    {
      int h = height(root);
      int ans = 0;  
      helper(root,ans,h);
      return ans;  
        
    }
    
    int height(TreeNode *root)
    {
        if(root==nullptr)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    
    void helper(TreeNode *root,int &ans, int h)
    {
        if(root==nullptr)
            return;
        if(h==1)
            ans+=root->val;
        
        helper(root->left, ans,h-1);
        helper(root->right,ans,h-1);
            
    }
};
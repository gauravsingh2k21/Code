/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
        TreeNode *ans=nullptr ;
        helper(original,cloned,target,ans);
        return ans;
        
    }
    
    void helper(TreeNode* original, TreeNode* cloned, TreeNode* target,TreeNode *&ans)
    {
        if(original == nullptr)
            return ;
        
        if(original == target)
            ans = cloned;
        
        helper(original->left, cloned->left,target,ans);
        helper(original->right,cloned->right,target,ans);
        
        return;
        
    }
};
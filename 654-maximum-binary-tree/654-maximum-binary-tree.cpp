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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums)
    {
       return helper(nums,0,nums.size()-1);
    }
    TreeNode* helper(vector<int>& nums,int left , int right)
    {
        if(left>right)
            return nullptr;
        int max_elem = left;
        for(int i=left;i<=right;++i)
        {
            if(nums[i]>nums[max_elem])
                max_elem = i;  
        }
        TreeNode *root = new TreeNode(nums[max_elem]);
        
        root->left = helper(nums,left,max_elem-1);
        root->right  = helper(nums,max_elem+1,right);
        
        return root;
    }
};
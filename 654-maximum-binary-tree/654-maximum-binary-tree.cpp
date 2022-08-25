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
    
    TreeNode* helper(vector<int>& nums,int start,int end)
    {
        if(start>end)
            return nullptr;
        
        int i = index(nums,start,end);
        TreeNode *root = new TreeNode(nums[i]);
                 
        
        root->left = helper(nums,start,i-1);
        root->right = helper(nums,i+1,end);
        
        return root;
    }
    
    int index(vector<int>& nums,int start,int end)
    {
       int idx = start;
        for(int i=start;i<=end;++i)
        {
            if(nums[i]>nums[idx])
                idx = i;  
        }
        
        return idx;
    }
};
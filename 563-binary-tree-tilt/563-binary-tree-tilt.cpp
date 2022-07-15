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
   
    int findTilt(TreeNode* root)
    {
         int tilt=0;
        helper(root,tilt);
        return tilt;
    }
    
    int helper(TreeNode* root, int &tilt)
    {
        if(root==nullptr)
            return 0;
        
        int leftsum = helper(root->left,tilt);
        int rightsum = helper(root->right,tilt);
        
        tilt+= abs(leftsum-rightsum);
        
        return leftsum+rightsum+root->val;
        
    }
};
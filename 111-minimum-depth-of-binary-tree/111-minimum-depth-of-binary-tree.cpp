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
    int minDepth(TreeNode* root) 
    {
      if(root == nullptr)
          return 0;
      if(root->left == nullptr && root->right == nullptr)
          return 1 ;
      
      int left = 100001, right = 100001;
      
      if(root->left)left = min(left, 1+minDepth(root->left));
      if(root->right)right = min(right,1+minDepth(root->right));
      
      return min(left,right);  
    }
};
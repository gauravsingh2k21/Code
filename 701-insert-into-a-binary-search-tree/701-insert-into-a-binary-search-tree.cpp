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
      TreeNode *ans = root  ;
      TreeNode* newNode = new TreeNode(val);
      if(root==nullptr)
      {   
              return newNode;
      }
        
      while(root->left || root->right)
      {  
          
          if((!root->left)&&(root->val>val))
               root->left =  new TreeNode(val);
          
           if((!root->right)&&(root->val<val))
               root->right =  new TreeNode(val);
              
         root = (root->val>val) ?root->left:root->right;
      }   
      
      if(root->val > val) 
      {
         root->left =  new TreeNode(val);
          
      }    
      if(root->val < val)
      { 
          root->right =  new TreeNode(val);
      }        
      return ans;  
    }
};
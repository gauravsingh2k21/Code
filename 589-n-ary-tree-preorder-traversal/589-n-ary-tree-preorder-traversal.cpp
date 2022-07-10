/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) 
    {
      vector<int> res;
      stack<Node *> s;
      if (root == nullptr)
         return res;
     
        
      s.push(root);
      
      while(!s.empty())
      {
          Node *curr = s.top();
          
          s.pop();
          res.push_back(curr->val);
          for(int i= curr->children.size()-1;i>=0;i--)
              s.push(curr->children[i]);
      }
        return res;
    }
};
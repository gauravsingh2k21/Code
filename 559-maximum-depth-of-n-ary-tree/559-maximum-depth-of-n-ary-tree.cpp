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
    int maxDepth(Node* root)
    {
        if(root == nullptr)
            return 0;
      int depth =1;
      for(Node* root: root->children)
      {
          depth = max(depth,1+maxDepth(root));
      }
        return depth;
    }
};
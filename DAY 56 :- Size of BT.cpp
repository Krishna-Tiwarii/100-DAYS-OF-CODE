class Solution {
  public:
    int getSize(Node* node) {
        if(!node)
        return 0;
        // code here
        return (1+getSize(node->left)+getSize(node->right));
    }
};

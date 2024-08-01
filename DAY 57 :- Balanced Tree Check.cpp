class Solution{
    public:
    
      int height(Node *root,bool &valid)
      {
          if(!root)
          return 0;
          
          int L = height(root->left,valid);
          int R = height(root->right,valid);
          
          if(abs(L-R)>1)
          return valid = 0;
          return 1+max(L,R);
      }
      
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        bool valid=1;
        height(root , valid);
        return valid;
    }
};

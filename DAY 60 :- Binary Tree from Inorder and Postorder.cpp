class Solution {
  public:

    // Function to return a tree created from postorder and inoreder traversals.
      int find(int in[], int target, int start, int end)
     {
        for(int i=start; i<=end; i++)
       {
           if(in[i]==target)
            return i;
        }
           return -1;
      }
       Node *Tree (int in[], int post[], int InStart, int InEnd, int index)
     {
        if(InStart > InEnd)
          return NULL;
         Node *root = new Node(post[index]);
         int pos = find(in , post[index], InStart, InEnd);

        root->right= Tree(in , post, pos+1, InEnd, index-1);
        root->left= Tree(in , post, InStart, pos-1, index-(InEnd-pos)-1);

         return root;
     }
   Node *buildTree(int n, int in[], int post[]) 
   {
        // Your code here
       return Tree( in , post, 0 ,n-1,n-1);

    }
};

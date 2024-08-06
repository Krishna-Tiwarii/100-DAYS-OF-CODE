class Solution{
    public:
     int find(int in[], int target, int start, int end)
   {
           for(int i=start; i<=end; i++)
      {
          if(in[i]==target)
          return i;
       }
      return -1;
   }
  Node *Tree (int in[], int pre[], int InStart, int InEnd, int index)
  {
    if(InStart > InEnd)
     return NULL ;
     Node *root = new Node(pre[index]);
     int pos = find(in , pre[index], InStart, InEnd);
    root->left= Tree(in , pre, InStart, pos-1, index+1);
    root->right= Tree(in , pre, pos+1, InEnd, index+(pos-InStart)+1);

       return root;
 }
   Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        return Tree( in, pre, 0,n-1,0);


    }
};

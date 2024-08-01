void Lview(Node *root, int level, vector<int>&ans)
{
    if(!root)
    return;
    
    if(ans.size()==level)
    ans.push_back(root->data);
    Lview(root->left, level+1, ans);
    Lview(root->right, level+1, ans);
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   if(!root)
   return ans;
   
   Lview(root,0,ans);
   return ans;
}

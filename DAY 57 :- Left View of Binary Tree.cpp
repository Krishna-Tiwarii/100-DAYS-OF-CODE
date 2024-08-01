vector<int> leftView(Node *root)
{
   // Your code here
   queue<Node*>q;
   q.push(root);
   vector<int>ans;
   if(!root)
   return ans;
   
   while(!q.empty())
   {
       int n = q.size();
       ans.push_back(q.front()->data);       
       while(n--)
       {
           Node *temp=q.front();
           q.pop();
           if(temp->left)
           q.push(temp->left);
           if(temp->right)
           q.push(temp->right);
       }
   }
     return ans;
}

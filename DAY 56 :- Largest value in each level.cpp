class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
        //code here
        vector<int> ans;
        queue<Node*>q;
        q.push(root);
        
        
        while(!q.empty())
        {
            int n = q.size();
            int maxi = INT_MIN;
            for(int i=0;i<n;i++)
            {
                Node* temp = q.front();
                q.pop();
                maxi = max(temp->data,maxi);
                if(temp->left)
                q.push(temp->left);
                
                if(temp->right)
                q.push(temp->right);
            
            }
            ans.push_back(maxi);
        }
        
        return ans;
    }
};

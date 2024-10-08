class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        // Your code here
        vector<int>ans(n,0);
        stack<int>st;
        int range;
        
        for(int i=0; i<n; i++)
        {
            while(!st.empty()&& arr[st.top()]>arr[i])
            {
                int index=st.top();
                st.pop();
                if(st.empty())
                {
                    range =i;
                    ans[range-1]=max(ans[range-1],arr[index]);
                }
                else
                {
                    range = i - st.top() -1;
                    ans[range-1]=max(ans[range-1],arr[index]);
                }
                
            }
            st.push(i);
        }
        
        while(!st.empty())
        {
            int index = st.top();
            st.pop();
            if(st.empty())
            {
                 range = n;
            ans[range-1]=max(ans[range-1],arr[index]);
            }
            else
            {
                range= n-st.top()-1;
            ans[range-1]=max(ans[range-1],arr[index]);
            }
            
        }
        
        for(int i=n-2; i>=0; i--)
            ans[i]=max(ans[i],ans[i+1]);
            
            return ans;
    }
};

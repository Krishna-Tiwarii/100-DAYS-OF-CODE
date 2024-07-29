class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        stack<int>st;
        
        //empty the queue
        while(!q.empty())
        {
            st.push(q.front());
            q.pop();
        }
        
        //empty the stack
        while(!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
         return q;
        
    }
};

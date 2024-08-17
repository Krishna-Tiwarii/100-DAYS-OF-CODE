class Solution
{
public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        // Min-heap priority queue
        priority_queue< pair<int, pair<int,int>> , vector < pair<int, pair<int,int>>> , greater< pair<int, pair<int,int>>>> p;
      
        // Initial population of the priority queue with the first element of each array
        for(int i = 0; i < K; i++)
        {
            p.push(make_pair(arr[i][0], make_pair(i, 0)));
        }
      
        vector<int> ans;
      
        while(!p.empty())
        {
            // Get the smallest element from the heap
            pair<int,pair<int,int>> Element = p.top();
            p.pop();
            
            // Add the smallest element to the result
            ans.push_back(Element.first);
            
            // Get the index of the array and the element in the array
            int i = Element.second.first;
            int j = Element.second.second;
            
            // If there is a next element in the array, push it to the heap
            if(j + 1 < arr[i].size())
            {
                p.push(make_pair(arr[i][j + 1], make_pair(i, j + 1)));
            }
        }
      
        return ans;
    }
};

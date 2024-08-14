class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        //max heap
        priority_queue<int>p;
        
        for(int i=0; i<k; i++)
        {
            p.push(arr[i]);
        }
        
        for(int i=k; i<=r; i++)
        {
            if(arr[i]<p.top())
            {
                p.pop();
                p.push(arr[i]);
            }
        }
        
        return p.top();
        
        }
};

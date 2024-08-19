class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        
        long long int total =0; // totsl number of subarray
        // map
        //prefix sum ,count
        unordered_map<long  long int, long  long int>m;
        long  long int PrefixSum=0;
        //initialize by 0,1;
        m[0]=1;
        for(int i=0; i<n; i++)
        {
            PrefixSum+=arr[i];
            if(m.count(PrefixSum))
            {
                total+= m[PrefixSum]; // count of prefix sum
                m[PrefixSum]++;
             }
            else
            m[PrefixSum]=1;
        }
        return total;
    }
};

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int product= 1, start=0,end=0,n= nums.size(), count=0;

        while(end<n)
        {
            product*=nums[end];
            // product chota hona chahiye mere k s

            while(product>=k&&start<=end)
            {
                product/=nums[start];
                start++;
            }

            count+=1+(end-start);
            end++;
            
        }
        return count;
    }
};

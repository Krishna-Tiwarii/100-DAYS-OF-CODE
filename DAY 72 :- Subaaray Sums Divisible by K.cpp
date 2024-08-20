class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        // unordered map

        unordered_map<int,int>m;
        m[0]=1;
        int PrefixSum =0,rem, total=0;

        for(int i=0 ; i<nums.size(); i++)
        {
            PrefixSum+=nums[i];
            rem = PrefixSum % k;
            if(rem<0)
            rem = k+rem;


          total+=m[rem];
                m[rem]++;
            
        } 
        return total;

    }
};

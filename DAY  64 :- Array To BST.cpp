class Solution {
  public:
 Node* solve(int start,int end,vector<int>&nums){
      if(start>end) return NULL;
      int mid=start+(end-start)/2;
      Node*root=new Node(nums[mid]);
      root->left=solve(start,mid-1,nums);
      root->right=solve(mid+1,end,nums);
      return root;
  }
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
        return solve(0,nums.size()-1,nums);
    }
};

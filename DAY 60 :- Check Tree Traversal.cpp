class Solution{
    public:
    int find(int inorder[],int target, int start, int end)
    {
        for(int i=start; i<=end; i++)
        {
            if(inorder[i] == target) 
            return i;
        }
        return -1;
    }
void makePost(int preorder[],int inorder[],int N,int &index,int start,int end, vector<int> &post){
        if(index>=N || start > end) return;
        int val = preorder[index++];
        int pos = find(inorder, val ,start, end);
        if(pos == -1) return;
        makePost(preorder, inorder, N, index, start, pos-1, post);
        makePost(preorder, inorder, N, index, pos+1, end, post);
        post.push_back(val);
    }
  bool checktree(int preorder[], int inorder[], int postorder[], int N) 
    { 
    	// Your code goes here
    	vector<int> post;
    	int index=0;
    	makePost(preorder, inorder, N, index, 0, N-1, post);
    	for(int i=0; i<N; i++){
    	    if(postorder[i] != post[i]) 
    	      return false;
    	}
    	return true;
     }
};

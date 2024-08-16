int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  //create mean heap
 vector< pair<int,pair<int,int>>>temp;
 for(int i=0; i<n ; i++)
 {
     temp.push_back(make_pair(mat[i][0], make_pair(i,0)));
 };
  priority_queue< pair<int,pair<int,int>> , vector< pair<int,pair<int,int>>>, greater< pair<int,pair<int,int>>>>p(temp.begin(),temp.end());
  // data (value), row ,column
  int ans;
   pair<int,pair<int,int>>Element;
   int i,j;
   
   while(k--)
   {
       Element = p.top();
       p.pop();
       ans= Element.first; //val
       i= Element.second.first; //row number
       j= Element.second.second; // col number
       if(j+1<n)
       p.push(make_pair(mat[i][j+1], make_pair(i,j+1)));
   }
   return ans;
}

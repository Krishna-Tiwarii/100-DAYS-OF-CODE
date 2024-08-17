class Solution {
  public:
  class Compare
  {
      public:
      bool operator()(Node *a, Node *b)
      {
          return a->data>b->data;
      }
      // heap reverse kam karta hai
  };
  
    // Function to merge K sorted linked list.
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        //min heap
      
        int K = arr.size();
        priority_queue<Node*, vector<Node*>, Compare>p;
        for (int i=0; i<K ; i++)
        {
            p.push(arr[i]);
        }
        
        Node *root= new Node(0); // dummy node
        Node *tail= root;
        Node *temp;
        
        while(!p.empty())
        {
            temp=p.top();
            p.pop();
             tail->next=temp;
              tail=tail->next;
               if(temp->next)
               p.push(temp->next);
        }
        return root->next;
    }
};

class Solution{
    int minEle;
    stack<int> st1; //original value
    stack<int> st2; // min value
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           if(st1.empty())
           return -1;
           else
           return st2.top();
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(st1.empty())
           return -1;
               int element =st1.top();
               st1.pop();
               st2.pop();
            return element;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           if(st1.empty())
           {
               st1.push(x);
               st2.push(x);
           }
           else
           {
               st1.push(x);
               st2.push(min(x,st2.top()));
           }
       }
};

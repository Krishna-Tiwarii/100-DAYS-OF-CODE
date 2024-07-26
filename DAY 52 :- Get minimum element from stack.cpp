class Solution{
    int minEle;
    stack<int> st1; //original value
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           if(st1.empty())
           return -1;
           else
           return st1.top()%101; // %min element nd /original element
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(st1.empty())
           return -1;
               int element =st1.top()/101;
               st1.pop();
            return element;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           if(st1.empty())
           {
               st1.push(x*101+x);

           }
           else
           {
               st1.push(x*101+min(x,st1.top()%101));
           }
       }
};

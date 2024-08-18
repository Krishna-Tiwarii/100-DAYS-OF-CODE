class Solution {
public:
    bool isPossible(vector<int>& target) {
        
        priority_queue<long long>p;
        long long sum=0;
        for(int i=0 ; i<target.size();i++)
        {
            p.push(target[i]);
            sum+=target[i];
        }
        long long MaxElement, RemSum , Element;

        while(p.top()!=1)
        {
             MaxElement = p.top();
             p.pop();
             RemSum = sum -MaxElement;

             if(RemSum<=0 ||  RemSum>=MaxElement)
             return 0;

             Element = MaxElement % RemSum;
             if(Element==0)
             {
                if(RemSum!=1)
                return 0;
                else
                return 1;
             }
             sum = RemSum + Element;
             p.push(Element);
        }

        return 1;
    }
};

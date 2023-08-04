//GFG POTD---------------------------------------------04/08/2023

//User function Template for C++

class Solution{
public:
    
        stack<int> temp;
    void Reverse(stack<int> &St)
    {
        if(St.empty())
        {
            St = temp;
            return ;
        }
        
        temp.push(St.top());
        St.pop();
        Reverse(St);
    }
};

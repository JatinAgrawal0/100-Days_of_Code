//GFG POTD-----------------------------------15/07/2023

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
          stack<int> t;
        int middle = ceil((sizeOfStack+1)/2);
        int num_to_pop = sizeOfStack - middle + 1;
        while(num_to_pop)
        {
            int num= s.top();
            s.pop();
            t.push(num);
            num_to_pop--;
        }
        t.pop();
        while(!t.empty())
        {
            s.push(t.top());
            t.pop();
        }
    }
};

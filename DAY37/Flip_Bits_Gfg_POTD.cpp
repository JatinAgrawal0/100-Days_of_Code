// GFG POTD--------------------------------------------15/08/2023

class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
         int count=0;
        int max=0;
        int one=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
                one++;
            if(a[i]==0)
            {
                count++;
                if(max<count)
                    max=count;
                
            }
            else if(count!=0)
                count--;
        }
        if(max<count)
            max=count;
        return max+one;
    }
};

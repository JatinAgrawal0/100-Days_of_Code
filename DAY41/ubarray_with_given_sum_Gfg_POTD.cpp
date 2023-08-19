//GFG POTD-----------------------------------------------------19/08/2023
//Subarray with given sum

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        if(s==0)
        {
            return {-1};
        }
        
        long long int cs=0;
        int i=0,j=0;
        
        while(i<n && j<=n){
            
            if(cs<s){
                cs+=arr[j];
                j++;
            }
            
            else if(cs>s){
                cs-=arr[i];
                i++;
            }
            
            else
            {
                return {i+1,j};
            }
        }
        return {-1};
    }
};

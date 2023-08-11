//GFG POTD-------------------------------------------12/08/2023
//Longest Increasing Subsequence


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int> temp;
       temp.push_back (a[0]);
       int len =1;
       
       for(int i=1;i<n;i++){
           if(a[i]>temp.back()){
               temp.push_back(a[i]);
               len++;
           }
           else{
               int ind = lower_bound(temp.begin(),temp.end(),a[i]) - temp.begin();
               temp[ind] = a[i];
               
           }
       }
       return len;
    }
};


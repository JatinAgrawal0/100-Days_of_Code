//GFG POTD-------------------------------------------------05/08/2023

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long ans= INT_MAX;
        sort(a.begin(), a.end());
        int j=0;
        long long m1= 0;
        for(int i=0; i<=n-m; i++){
            j= m+i-1;
            m1= a[j]- a[i];
            ans= min(ans, m1);
        }
        return ans;
    }   
};

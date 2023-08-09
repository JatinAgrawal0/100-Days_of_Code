//GFG POTD-------------------------------------------------------09/08/2023

class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        int ans=1;
        for(int i=2;i<=N;i++){
            while(N%i==0){
                ans=max(ans,i);
                N=N/i;
            }
        }
        if(ans==1) ans=N;
        
        return ans;
    }
};

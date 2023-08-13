//GFG POTD--------------------------------------------------13/08/2023


class Solution {
  public:
    int nthFibonacci(int n){
        // code here
          if(n==0 || n==1){
            return n;
        }

        long long int a=0;
        long long int b=1;
        long long int c=0;
        
        for(long long int i=2;i<=n;i++){
            c=(a+b)%1000000007;
            a=b;
            b=c;
        }

        return c;
    }

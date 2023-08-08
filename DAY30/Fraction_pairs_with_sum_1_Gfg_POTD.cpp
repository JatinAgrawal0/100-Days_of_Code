//GFG POTD-----------------------------------------08/08/2023

//User function Template for C++
class Solution
{
    public:
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        if(a.first!=b.first){
            return a.first>b.first;
        }
        return a.second<b.second;
    }
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    int countFractions(int n, int numerator[], int denominator[])
    {
        int ans=0;
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            int g=gcd(numerator[i],denominator[i]);
            int d=denominator[i]/g;
            int n=numerator[i]/g;
            if((n/d)<=1){
            vp.push_back({denominator[i]/g,numerator[i]/g});}
        }
        sort(vp.begin(),vp.end(),comp);
        for(int i=0;i<n;i++){
          int j=i+1;
          while(j<n){
              int num=vp[i].first*vp[j].second + vp[j].first * vp[i].second;
              int den=vp[i].first*vp[j].first;
              if(num%den==0 and num/den==1){
                  ans++;j++;
                  continue;
              }
              if(num/den>=1) break;
              else if(num/den<1) j++;
              
          }
      }        
    return ans;
    }
};

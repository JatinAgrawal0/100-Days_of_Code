//GFG POTD-------------------------------------------26/08/2023
//Longest K unique characters substring

//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int i=0,j=0,n=s.size(),maxi=-1;
        unordered_map<char,int>m;
        while(j<n){
            m[s[j]]++;
            while(m.size()>k){
                m[s[i]]--;
                if(m[s[i]]==0){
                    m.erase(s[i]);
                }
                i++;
            }
            if(m.size()==k)
                maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};


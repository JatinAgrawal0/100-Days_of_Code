//GFG POTD-----------------------------------------------------18/08/2023

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
       vector<int> l;
       int x=a[n-1];
       l.push_back(x);
       for(int i=n-2;i>=0;i--){
           if(a[i]>=x){
               x=a[i];
               l.push_back(a[i]);
           }
       }
       reverse(l.begin(),l.end());
       return l;
    }
};

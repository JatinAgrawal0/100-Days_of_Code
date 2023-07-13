//GFG POTD-------------------------------------13/07/23

class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int> m1;
        for(int i=0;i<n;i++)
        {
            m1[arr[i]]++;
        }
        int n1=m1.size();
        set<int> s;
        for(auto x : m1){
            s.insert(x.second);
        }
        if(s.size()!=n1)  return false;
        return true;
    }
};

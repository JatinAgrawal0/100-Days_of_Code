//GFG POTD------------------------------------------------------15/08/2023

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
         vector<int >ans;

//create a map to keep a count of each element
        map<int,int>map;

        for (auto i:nums){
            map[i]++;
        }

// check for values==1 in map -- these values key are the solution 

//store these in vector  

        for (auto i:map){
            if (i.second==1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};

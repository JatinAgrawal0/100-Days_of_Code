//GFG POTD----------------------------------------20/07/2023


class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char,int> count;
       
       for(auto x:S){
           count[x]++;
       }
       
       for(auto x:S){
           if(count[x]==1){
               return x;
           }
       }
       
       return '$';
       
    }

};

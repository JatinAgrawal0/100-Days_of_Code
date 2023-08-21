//LEETCODE POTD----------------------------------------------------21/08/2023
//Repeated Substring Pattern

class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        return (str + str).find(str, 1) < str.size();
    }
};

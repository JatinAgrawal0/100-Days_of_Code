/LEETCODE POTD---------------------------------------------------22/08/2023
//Excel Sheet Column Title

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string out;
        while (columnNumber > 0) {
            out = char('A' + (columnNumber - 1) % 26) + out;
            columnNumber = (columnNumber - 1) / 26;
        }
        return out;
    }
};

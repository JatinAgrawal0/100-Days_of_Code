//GFG POTD---------------------------------------------27/08/2023
//Reverse a String
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
           int i=0,j=str.length()-1;
        while(i<j)
        {
            int temp;
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i++;
            j--;
        }
        return str;
    }
};

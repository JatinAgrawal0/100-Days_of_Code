//GFG POTD-------------------------------------25/08/2023
//Palindrome String

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int l = 0;
	    int r = S.size()-1;
	    
	    while(l <= r)
	    {
	        if(S[l] != S[r])
	        {
	            return 0;
	        }
	        
	        l++;
	        r--;
	    }
	return 1;
	}

};

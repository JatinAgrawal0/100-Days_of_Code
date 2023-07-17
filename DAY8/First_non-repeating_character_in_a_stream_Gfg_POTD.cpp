//GFG POTD-------------------------------------17/07/2023

class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		     vector<int> counter(26, false);
		    int j=0;
		    string ans ="";
		    for(int i=0; i<A.size(); i++){
		        counter[A[i]-'a']++;
		        while(j<=i && counter[A[j]-'a'] > 1)
		            j++;
		        if(i!=0 && i+1==j)
		            ans.push_back('#');
		        else
		            ans.push_back(A[j]);
		    }
		    return ans;
		}

};

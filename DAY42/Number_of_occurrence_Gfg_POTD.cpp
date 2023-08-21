//GFG POTD---------------------------------------------------20/08/2023
//Number of occurrence

//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int first = lower_bound(arr,arr+n,x)-arr;
	    int last = (upper_bound(arr,arr+n,x)-arr)-1;
	    
	    if(first < n && arr[first] == x)
	        return last-first+1;
	    return 0;
	}
};

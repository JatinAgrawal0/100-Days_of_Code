//LEETCODE POTD-----------------------------------25/07/2023

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int i=0;
        int j=arr.size()-1;
        int n=arr.size();
        while(i<=j){
            int mid=(i+j)/2;
            if((mid==0||arr[mid-1]<arr[mid])&&(mid==n-1||arr[mid+1]<arr[mid]))
                return mid;
            else if(mid>0&&arr[mid-1]>arr[mid])
                j=mid-1;
            else
                i=mid+1;
        }
        return -1;
    }
};

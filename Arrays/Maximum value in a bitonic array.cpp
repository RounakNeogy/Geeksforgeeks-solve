/*
Question:
Given an array Arr of N elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.

Input: 
N = 9
Arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.
*/

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int ans=-1,l=0,r=n-1;
	    while(l<=r)
	    {
	        int mid=(l+r)/2;
	        if(arr[mid]<arr[mid+1])
	        {
	            l=mid+1;
	        }
	        else
	        {
	            ans=mid;
	            r=mid-1;
	        }
	    }
	    if(ans==-1)
	        return arr[n-1];
	    return arr[ans];
	}
};

/*
Question:
Given an array of size N consisting of only 0's and 1's. 
The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. 
Find the count of all the 0's.

Input:
N = 12
Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
Output: 3
Explanation: There are 3 0's in the given array.
*/
class Solution{   
public:
    int countZeroes(int arr[], int n) {
        int ans=-1,l=0,r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]==1)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
                ans=mid;
            }
        }
        return n-ans;
    }
};

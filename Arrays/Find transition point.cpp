int transitionPoint(int arr[], int n) {
    int ans=-1,l=0,r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]==0)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
                ans=mid;
            }
        }
        return ans;
}

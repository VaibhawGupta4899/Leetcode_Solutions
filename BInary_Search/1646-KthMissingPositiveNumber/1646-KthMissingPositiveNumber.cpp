// Last updated: 14/07/2026, 17:10:48
class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int n=a.size();
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int mis=a[mid]-(mid+1);
        if(mis>=k) high=mid-1;
        else if(mis<k) low=mid+1;
    }
    return low+k;
    }
};
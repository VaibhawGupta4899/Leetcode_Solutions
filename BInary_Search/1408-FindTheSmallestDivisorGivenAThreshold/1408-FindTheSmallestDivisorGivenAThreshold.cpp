// Last updated: 14/07/2026, 17:10:52
class Solution {
public:
    int hold(vector<int>&a,int mid){
    int sum=0;
    for(int i=0;i<a.size();i++) sum+=(a[i]+mid-1)/mid;
    return sum;
}
    int smallestDivisor(vector<int>& a, int m) {
    int n=a.size(),ans=-1;
    if(n>m) return ans;
    int low=1;
    int high=*max_element(a.begin(),a.end());
    if(n==m && m==high) return high;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(hold(a,mid)<=m){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    if(ans!=INT_MAX) return ans;
    else return -1;
    }
};
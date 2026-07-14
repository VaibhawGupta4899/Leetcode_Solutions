// Last updated: 14/07/2026, 17:10:54
class Solution {
public:
    int boq(vector<int>&a,int mid,int k){
    int n=a.size();
    int cnt=0,r=0;
    for(int i=0;i<n;i++){
        if(a[i]<=mid){
            cnt++;
            if(cnt==k){
                r++;
                cnt=0;
            }
        }
        else cnt=0;
    }
    return r;
}
    int minDays(vector<int>& a, int m, int k) {
    int n=a.size();
    if(n<(long long)m*k) return -1;
    int ans=INT_MAX;
    int low=*min_element(a.begin(),a.end()), high=*max_element(a.begin(),a.end());
    while(low<=high){
        int mid=low+(high-low)/2;
        if(boq(a,mid,k)>=m){
            ans=min(ans,mid);
            high=mid-1;
        }
        else low=mid+1;
    }
    if(ans!=INT_MAX) return ans;
    else return -1;
    }
};
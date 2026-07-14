// Last updated: 14/07/2026, 17:11:08
class Solution {
public:
int rect(vector<int> &a,int l,int h,int x,int ans){
    int mid=l+(h-l)/2;
    if(l>h) return ans;
    if(a[mid]>=x){
        h=mid-1;
        ans=mid;
    }
    else{
        l=mid+1;
    }
    return rect(a,l,h,x,ans);
}
    int searchInsert(vector<int>& a, int x) {
    sort(a.begin(),a.begin());
    int n=a.size();
    int ans=n;
    int l=0;
    int h=n-1;
    int p=rect(a,l,h,x,ans);
    return p;
    }
};
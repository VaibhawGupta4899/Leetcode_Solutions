// Last updated: 14/07/2026, 17:10:55
class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
    int n=a.size();
    int l=1;
    int h=n-2;
    bool flag;
    if(n==1) return a[0];
    if(a[0]!=a[1]) return a[0];
    if(a[n-1]!=a[n-2]) return a[n-1];
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]!=a[mid-1] && a[mid]!=a[mid+1]) return a[mid];
        if((mid%2==1 && a[mid-1]==a[mid]) || (mid%2==0 && a[mid+1]==a[mid])) l=mid+1;
        else h=mid-1;
    }
    return -1;
    }
};
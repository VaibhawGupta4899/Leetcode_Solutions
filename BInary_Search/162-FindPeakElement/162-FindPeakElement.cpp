// Last updated: 14/07/2026, 17:11:01
class Solution {
public:
    int findPeakElement(vector<int>& a) {
    int n=a.size();
    int l=1;
    int h=n-2;
    if(n==1) return 0;
    if(a[1]<a[0]) return 0;
    if(a[n-2]<a[n-1]) return n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1]) return mid;
        else if(a[mid]>a[mid-1]) l=mid+1;
        else h=mid-1;
    }
    return -1;
    }
};
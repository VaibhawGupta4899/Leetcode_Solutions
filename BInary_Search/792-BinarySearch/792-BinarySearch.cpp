// Last updated: 14/07/2026, 17:10:51
class Solution {
public:
int rect(vector<int> &a,int l,int h,int t){
    if(l>h) return -1;
    int mid=l+(h-l)/2;
    if(a[mid]==t) return mid;
    else if(a[mid]>t) h=mid-1;
    else l=mid+1;
    return rect(a,l,h,t);
}
    int search(vector<int>& a, int t) {
    sort(a.begin(),a.end());
    int n=a.size();
    int l=0;
    int h=n-1;
    int p=rect(a,l,h,t);
    return p;
    }
};
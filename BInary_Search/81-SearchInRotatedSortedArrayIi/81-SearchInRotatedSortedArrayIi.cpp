// Last updated: 14/07/2026, 17:11:04
class Solution {
public:
    bool search(vector<int>& a, int x) {
    int n=a.size();
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]==x) return true;
        if(a[l]==a[mid] && a[h]==a[mid]){
            l++,h--;
            continue;
            }
        if(a[l]<=a[mid]){
            if(a[l]<=x && a[mid]>x) h=mid-1;
            else l=mid+1;
            }
        else{   
            if(a[mid]<x && a[h]>=x) l=mid+1;
            else h=mid-1;
            }
        }
    return false;
    }
};
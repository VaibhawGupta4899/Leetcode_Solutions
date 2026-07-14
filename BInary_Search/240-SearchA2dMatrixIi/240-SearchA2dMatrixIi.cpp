// Last updated: 14/07/2026, 17:10:58
class Solution {
public:
    bool fnc1(vector<int>&a,int x){
    int m=a.size();
    int low=0;
    int high=m-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==x) return true;
        else if(a[mid]<x) low=mid+1;
        else high=mid-1;
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& a, int x) {
    int n=a.size(),m=a[0].size();
    for(int i=0;i<n;i++) if(fnc1(a[i],x)==true) return true;
    return false;
    }
};
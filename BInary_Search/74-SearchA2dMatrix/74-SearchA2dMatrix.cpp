// Last updated: 14/07/2026, 17:11:05
class Solution {
public:
    bool searchMatrix(vector<vector<int>>&a,int x){
    int n=a.size(),m=a[0].size();
    int low=0,high=n*m-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int row=mid/m,col=mid%m;
        if(a[row][col]==x) return true;
        else if(a[row][col]<x) low=mid+1;
        else high=mid-1;
    }
    return false;
    }
};
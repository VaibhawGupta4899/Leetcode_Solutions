// Last updated: 15/07/2026, 11:47:04
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& a) {
    vector<int> ans;
    int n=a.size(),m=a[0].size();
    int low=0,high=m-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int maxx=-1,ind=-1;
        for(int i=0;i<n;i++){
            if(maxx<a[i][mid]) {
                maxx=a[i][mid];
                ind=i;
            }
        }
        int left= mid>0 ? a[ind][mid-1] : -1;
        int right= mid<m-1 ? a[ind][mid+1] : -1;
        if(a[ind][mid]>left && a[ind][mid]>right){
            ans.push_back(ind);
            ans.push_back(mid);
            return ans;
        }
        else if(a[ind][mid]<right) low=mid+1;
        else high=mid-1;
        }
        return {-1,-1}; 
    }
};
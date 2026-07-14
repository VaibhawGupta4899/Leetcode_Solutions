// Last updated: 14/07/2026, 17:11:10
class Solution {
public:
int lsbs(vector<int> &a,int x){
    int n=a.size();
    int l=0;
    int ans=-1;
    int h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]==x){
            ans=mid;
            l=mid+1;
        }
        else if(a[mid]<x) l=mid+1;
        else h=mid-1;
    }
    return ans;
}
int fibs(vector<int> &a,int x){
    int n=a.size();
    int l=0;
    int ans=-1;
    int h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]==x){
            ans=mid;
            h=mid-1;
        }
        else if(a[mid]<x) l=mid+1;
        else h=mid-1;
    }
    return ans;
}
    vector<int> searchRange(vector<int>& a, int x) {
        vector<int> ans;
        int l=fibs(a,x);
        int m=lsbs(a,x);
        ans.push_back(l);
        ans.push_back(m);
        return ans;
    }
};
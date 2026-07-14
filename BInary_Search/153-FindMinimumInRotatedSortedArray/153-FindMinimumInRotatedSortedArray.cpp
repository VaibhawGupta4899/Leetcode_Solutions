// Last updated: 14/07/2026, 17:11:02
class Solution {
public:
    int findMin(vector<int>& a) {
    int n=a.size();
    int l=0;
    int h=n-1;
    int ans=INT_MAX;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[l]<=a[h]){
            ans=min(a[l],ans);
            break;
        }
        if(a[l]<=a[mid]){
            ans=min(ans,a[l]);
            l=mid+1;
        }
        else{
            ans=min(ans,a[mid]);
            h=mid-1;
        }
    }
    return ans;
    }
};
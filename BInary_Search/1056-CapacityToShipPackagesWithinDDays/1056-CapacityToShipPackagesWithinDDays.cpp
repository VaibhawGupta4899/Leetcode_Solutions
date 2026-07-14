// Last updated: 14/07/2026, 17:10:49
class Solution {
public:
    int din(vector<int>&a,int c){
    int d=1,n=a.size(),e=0;
    for(int i=0;i<n;i++){
        if(e+a[i]<=c) e+=a[i];
        else{
            d++;
            e=a[i];
        }
    }
    return d;
}
    int shipWithinDays(vector<int>& a, int days) {
        int n=a.size();
    int high=0,ans=-1;
    int low=*max_element(a.begin(),a.end());
    for(int i=0;i<n;i++) high+=a[i];
    while(low<=high){
        int mid=low+(high-low)/2;
        if(din(a,mid)<=days){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
    }
};
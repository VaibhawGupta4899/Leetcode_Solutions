// Last updated: 14/07/2026, 17:10:57
class Solution {
public:
    int paint(vector<int>&a,int mid){
    int pt=1,ar=0;
    for(int i=0;i<a.size();i++){
        if(a[i]+ar<=mid){
            ar+=a[i];
        }
        else {
            pt++;
            ar=a[i];
        }
    }
    return pt;
}
    int splitArray(vector<int>& a, int p) {
    int n=a.size();
    if(p>n) return -1;
    int low=*max_element(a.begin(),a.end());
    int high=accumulate(a.begin(),a.end(),0);
    while(low<=high){
        int mid=low+(high-low)/2;
        if(paint(a,mid)<=p) high=mid-1;
        else low=mid+1;
    }
    return low;
    }
};
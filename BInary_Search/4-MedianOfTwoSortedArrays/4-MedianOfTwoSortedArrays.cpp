// Last updated: 14/07/2026, 17:11:13
class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
    int n1=a.size(),n2=b.size();
    int low=0;
    if(n1>n2) return findMedianSortedArrays(b,a);
    int high=n1;
    int k=(n1+n2+1)/2;
    while(low<=high){
        int mid1=low+(high-low)/2;
        int mid2=k-mid1;
        int r1=INT_MAX,r2=INT_MAX,l1=INT_MIN,l2=INT_MIN;
            if(mid1<n1)r1=a[mid1];
            if(mid2<n2)r2=b[mid2];
            if(mid1>0)l1=a[mid1-1];
            if(mid2>0)l2=b[mid2-1];
        if(l1<=r2 && l2<=r1){
            if((n1+n2)%2==0) return (((double)max(l1,l2)+(double)min(r1,r2))/2.0);
            else return max(l1,l2);
        }
        else if(l2>r1) low=mid1+1;
        else if(l1>r2) high=mid1-1;
    }
    return -1;
    }
};
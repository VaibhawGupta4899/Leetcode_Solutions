// Last updated: 22/07/2026, 16:02:53
class Solution {
public:
    bool isPerfectSquare(int x) {
        if(x==1) return true;
        int high=x/2;
        int low=1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long y=mid*mid;
            if(y==x) return true;
            else if(y<x) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};
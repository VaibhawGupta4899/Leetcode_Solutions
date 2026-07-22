// Last updated: 22/07/2026, 16:02:51
class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0 || c==1) return true;
        int i=0,j=(int)sqrt(c);
        while(i<=j){
            long long x= (long long) i * (long long) i;
            long long y= (long long) j * (long long) j;
            long long z=x+y;
            if(z==c) return true;
            else if(z>c) j--;
            else i++;
        }
        return false;
    }
};
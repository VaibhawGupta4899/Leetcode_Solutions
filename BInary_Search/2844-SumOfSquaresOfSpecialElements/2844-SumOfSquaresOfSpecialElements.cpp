// Last updated: 22/07/2026, 16:02:43
class Solution {
public:
    int sumOfSquares(vector<int>& a) {
        int n=a.size(),s=0;
        vector<int> h(n+1,0);
        for(int i=1;i<=n;i++) if((n%i)==0) h[i]++;
        for(int i=1;i<=n;i++){
            if(h[i]==1){
                long long x = (long long)a[i-1] * (long long)a[i-1];
                s+=x;
            }
        }
        return s;
    }
};
// Last updated: 17/07/2026, 10:02:24
class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<=n;i++) if(find(a.begin(),a.end(),i)==a.end()) return i;
        return -1;
    }
};
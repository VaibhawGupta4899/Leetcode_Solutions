// Last updated: 14/07/2026, 17:11:07
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
    int n=a.size();
    if(n==0) return {};
    sort(a.begin(), a.end());
    vector<vector<int>> ans;
    vector<int> b=a[0];
    for(int i=1;i<n;i++){
        if(b[1]>=a[i][0]){
            if(b[1]>=a[i][1]) continue;
            else b[1]=a[i][1];
        }
        else{
            ans.push_back(b);
            b=a[i];
        }
    }
    ans.push_back(b);
    return ans;
    }
};
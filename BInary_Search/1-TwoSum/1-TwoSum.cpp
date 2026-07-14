// Last updated: 14/07/2026, 17:11:15
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
    int n=a.size();
    vector<int> ans;
   unordered_map<int,int> m;
   for(int i=0;i<n;i++){
    if(m.find(k-a[i])!=m.end()){
        ans.push_back(m[k-a[i]]);
        ans.push_back(i);
    }
    else m[a[i]]=i;
   }
   return ans;
    }
};
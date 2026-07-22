// Last updated: 22/07/2026, 16:03:03
class Solution {
public:
    void pre(TreeNode* root, vector<int>& ans) {
        if (!root) return;
        pre(root->left, ans);
        ans.push_back(root->val);
        pre(root->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        pre(root, ans);
        return ans;
    }
};
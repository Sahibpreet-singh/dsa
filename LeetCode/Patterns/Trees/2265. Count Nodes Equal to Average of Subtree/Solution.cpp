class Solution {
public:
    int ans = 0;

    pair<int,int> avg(TreeNode* root) {
        if (!root)
            return {0, 0};

        auto left = avg(root->left);
        auto right = avg(root->right);

        int sum = root->val + left.first + right.first;
        int cnt = 1 + left.second + right.second;

        if (sum / cnt == root->val)
            ans++;

        return {sum, cnt};
    }

    int averageOfSubtree(TreeNode* root) {
        avg(root);
        return ans;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty())
        {
            int n = que.size();
            vector<int> x(n);
            for (int i = 0; i < n; i++)
            {
                TreeNode *temp = que.front();
                x[i] = temp->val;
                if (temp->left != nullptr)
                {
                    que.push(temp->left);
                }
                if (temp->right != nullptr)
                {
                    que.push(temp->right);
                }
                que.pop();
            }
            ans.push_back(x);
        }
        return ans;
    }
};
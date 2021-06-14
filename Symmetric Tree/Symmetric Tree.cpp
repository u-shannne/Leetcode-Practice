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
    //     vector<int>analy_left(TreeNode* root){
    //         stack<TreeNode*> t;
    //         vector<int> squ;
    //         while(1){
    //             if(root){
    //                 t.push(root);
    //                 squ.push_back(1);
    //                 root = root->left;
    //             }else{
    //                 if(t.empty()) break;
    //                 root = t.top();
    //                 squ.push_back(root->val);
    //                 t.pop();
    //                 squ.push_back(2);
    //                 root = root->right;
    //             }
    //         }
    //         return squ;
    //     }
    //     vector<int>analy_right(TreeNode* root){
    //         stack<TreeNode*> t;
    //         vector<int> squ;
    //         while(1){
    //             if(root){
    //                 t.push(root);
    //                 squ.push_back(1);
    //                 root = root->right;
    //             }else{
    //                 if(t.empty()) break;
    //                 root = t.top();
    //                 squ.push_back(root->val);
    //                 t.pop();
    //                 squ.push_back(2);
    //                 root = root->left;
    //             }
    //         }
    //         return squ;
    //     }

    //     bool isSymmetric(TreeNode* root) {
    //         vector<int> left;
    //         vector<int> right;
    //         if(root->left!=nullptr && root->right!=nullptr){
    //             left = analy_left(root->left);
    //             right = analy_right(root->right);
    //         }else if(root!=nullptr && root->left==nullptr && root->right==nullptr){
    //             return true;
    //         }else{
    //             return false;
    //         }

    //         if(left.size()!=right.size()) return false;
    //         for(int i = 0 ;i<left.size();i++){
    //             if(left[i]!=right[i])return false;
    //         }
    //         return true;

    //     }
    bool check(TreeNode *l, TreeNode *r)
    {
        if (l == nullptr && r == nullptr)
            return true;
        if (l == nullptr || r == nullptr)
            return false;
        return (l->val == r->val) && check(l->left, r->right) && check(l->right, r->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        return check(root, root);
    }
};
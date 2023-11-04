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
class Solution {
public:
    vector<int>vec;
    void ans(TreeNode* root)
    {
      if(root==NULL)return;
      ans(root->left);
      vec.push_back(root->val);
      ans(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        int mini=INT_MAX;
        ans(root);
        for(int i=1;i<vec.size();i++)
        mini=min(mini,vec[i]-vec[i-1]);
        return mini;
    }
};
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
    int cnt=0;

    pair<int,int> ans(TreeNode* root)
    {
        if(root==NULL)return {0,0};
        
        auto [left,cntLeft]=ans(root->left);
        auto [right,cntRight]=ans(root->right);
        
        int sum=root->val+left+right;
        int total=1;
        total+=cntLeft+cntRight;
        if(sum/total==root->val)cnt++;

        return {sum,total};

    }
    int averageOfSubtree(TreeNode* root) {
        auto [x,y]=ans(root);
        return cnt;
    }
};
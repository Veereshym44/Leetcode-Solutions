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
    int sum=0;
    void ans(TreeNode *root,int cur)
    {
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            sum+=cur*10+root->val;
            return;
        }
        int x=cur*10+root->val;
        ans(root->left,x);
        ans(root->right,x);
        
    }
    int sumNumbers(TreeNode* root) {
        vector<int>vec;
        if(root==NULL )return 0;
        
        ans(root,0);
      return sum;
        
    
    }
};
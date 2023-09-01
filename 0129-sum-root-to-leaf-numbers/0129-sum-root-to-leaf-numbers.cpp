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
    void ans(TreeNode *root,vector<int>&vec,int cur)
    {
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            vec.push_back(cur*10+root->val);
            return;
        }
        int x=cur*10+root->val;
        ans(root->left,vec,x);
        ans(root->right,vec,x);
        
    }
    int sumNumbers(TreeNode* root) {
        vector<int>vec;
        if(root==NULL )return 0;
        
        ans(root,vec,0);
        // for(auto i:vec)
        // {
        //     cout<<i<<"\n";
        // }
        int sum=accumulate(vec.begin(),vec.end(),0);
        return sum;
    }
};
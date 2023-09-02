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
   
    vector<int>pre;
    void preorder(TreeNode* root)
    {
        if(root==NULL)return;
        pre.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    void flatten(TreeNode* root) {
        
        if(root==NULL)return;
        preorder(root);
        TreeNode* node=root;
        node->val=pre[0];
        node->left=NULL;
        for(int i=1;i<pre.size();i++)
        {
            TreeNode* newnode=new TreeNode(pre[i]);
            node->right=newnode;
            newnode->left=NULL;
            node=node->right;
            
        }
    }
};
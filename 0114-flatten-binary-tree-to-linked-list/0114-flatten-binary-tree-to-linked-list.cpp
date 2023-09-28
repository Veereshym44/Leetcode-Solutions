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
        TreeNode* node=root;
        preorder(root);

        int i=0;
        while(i<pre.size()-1)
        {
            node->left=NULL;
            node->val=pre[i];

            TreeNode* temp=new TreeNode(pre[i+1]);
            i++;
            node->right=temp;
            node=node->right;
        
        }
        
    }
};
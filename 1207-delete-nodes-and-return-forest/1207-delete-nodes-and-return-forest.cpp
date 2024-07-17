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
    vector<TreeNode*>res;
    
    void postOrder(TreeNode* &root,unordered_set<int>&s,bool flag)
    {
            if(root==NULL)return;
            bool temp=false;

            if(s.find(root->val)!=s.end())temp=true;
            postOrder(root->left,s,temp);
            postOrder(root->right,s,temp);

            if(s.find(root->val)==s.end() && flag)res.push_back(root);

            if(s.find(root->val)!=s.end())root=NULL;

    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {

        unordered_set<int>s(to_delete.begin(),to_delete.end());
        
        postOrder(root,s,true);

        return res;
        
    }
};
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
    void ans(TreeNode* root,int val)
    {
        if(root==NULL)return ;
        

      if(root->left)
      {
          if(val%2==0)sum+=root->left->val;
          ans(root->left,root->val);
      }

      if(root->right)
      {
          if(val%2==0)sum+=root->right->val;
          ans(root->right,root->val);
      }

    }
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL)return 0;

        ans(root->left,root->val);
        ans(root->right,root->val);
        return sum;
    }
};
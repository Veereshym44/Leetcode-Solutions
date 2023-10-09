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
    unordered_map<int,int>mp;
    int answer=0;
    void dfs(TreeNode* node)
    {

        if(node==NULL)return;

        if(!node->left && !node->right)
        {
            mp[node->val]++;
            int cnt=0;

            for(auto i:mp)
            {
                if(i.second%2==1)
                cnt++;
                
            }

            if(cnt==1 || cnt==0)answer++;

            mp[node->val]--;
            if(mp[node->val]==0)
            mp.erase(node->val);

            return;

        }

        mp[node->val]++;
        if(node->left)dfs(node->left);
        if(node->right)dfs(node->right);
          mp[node->val]--;
            if(mp[node->val]==0)
            mp.erase(node->val);
    }
    int pseudoPalindromicPaths (TreeNode* root) {

        dfs(root);
        return answer;
        
    }
};
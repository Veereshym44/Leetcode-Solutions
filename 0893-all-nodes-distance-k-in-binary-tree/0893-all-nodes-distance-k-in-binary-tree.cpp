/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void markPar(unordered_map<TreeNode*,TreeNode*>&mp,TreeNode* root)
    {
        if(root==NULL)return;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *root1=q.front();
                q.pop();
                if(root1->left!=NULL)
                {
                    mp[root1->left]=root1;
                q.push(root1->left);
                }
                if(root1->right!=NULL)
                {
                q.push(root1->right);
                mp[root1->right]=root1;
                }

             

            }
           
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>mp;
        markPar(mp,root);
        unordered_map<TreeNode*,bool>vis;
        vis[target]=true;
        queue<TreeNode*>q;
        q.push(target);
        int cur=0;
        while(!q.empty())
        {
            
            int size=q.size();
            if(cur++==k)break;
            for(int i=0;i<size;i++)
            {
                TreeNode* current=q.front();
                q.pop();
                
                if(current->left!=NULL && !vis[current->left])
                {
                    vis[current->left]=true;
                    q.push(current->left);
                }
                if(current->right!=NULL&& vis.find(current->right)==vis.end())
                {
                    vis[current->right]=true;
                    q.push(current->right);
                }
                if(mp.find(current)!=mp.end()&& vis.find(mp[current])==vis.end())
                {
                    vis[mp[current]]=true;
                    q.push(mp[current]);
                }
            }
        }
        vector<int>vec;
        while(!q.empty())
        {
            vec.push_back(q.front()->val);
            q.pop();
        }
        return vec;
        
    }
};
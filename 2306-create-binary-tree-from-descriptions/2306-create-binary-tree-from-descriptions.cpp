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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {

        unordered_map<int,TreeNode*> mp;
        unordered_map<int,int>in;


        for(auto i:descriptions)
        {
            TreeNode *node,*child;
            if(mp.find(i[0])==mp.end())
              node = new TreeNode(i[0]);
            else{
                node= mp[i[0]];
            }



            if(mp.find(i[1])==mp.end())
            {
                child=new TreeNode(i[1]);
            }
            else{
                child=mp[i[1]];
            }

            if(i[2]==1)
            {
               node->left=child; 
            }
            else{
                node->right=child;
            }

            mp[i[0]]=node;
            mp[i[1]]=child;
            in[i[1]]++;
        }

TreeNode * root;
        for(auto i:mp)
        {
            if(in.find(i.first)==in.end()){
                root=i.second;
            }
        }

        return root;

        
    }
};
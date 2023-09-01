/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
vector<vector<Node*>> levelOrder(Node* root) {
        vector<vector<Node*>>ans;
        if(root==NULL)
        return ans;
        queue<Node *>q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<Node*>level;
            for(int i=0;i<size;i++)
            {
                Node *root1=q.front();
                q.pop();
                if(root1->left!=NULL)
                q.push(root1->left);
                if(root1->right!=NULL)
                q.push(root1->right);

                level.push_back(root1);

            }
            ans.push_back(level);
        }
        return ans;
    }
    Node* connect(Node* root) {
        if(root==NULL)
        return NULL;
        vector<vector<Node*>>ans=levelOrder(root);
        
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size()-1;j++)
            {
                ans[i][j]->next=ans[i][j+1];
            }
        
            ans[i][ans[i].size()-1]->next=NULL;
        }
        return root;
    }
};
class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> indegree(n, 0);
        for(int i = 0; i<n; i++){
            if(leftChild[i] != -1){
                indegree[leftChild[i]]++;
            }
            if(rightChild[i] != -1){
                indegree[rightChild[i]]++;
            }
        }
        int root = -1;
        for(int i = 0; i<n; i++){
            if(indegree[i] == 0){
                if(root == -1){
                    root = i;
                }
                else{
                    return false;
                }
            }
        }
        if(root == -1){
            return false;
        }

        unordered_set<int>s;
      
        queue<int>q;
        q.push(root);
        while(!q.empty())
        {
            int i=q.front();
            q.pop();

            if(s.find(i)!=s.end())return false;

            s.insert(i);
            if(leftChild[i]!=-1)
            q.push(leftChild[i]);

            if(rightChild[i]!=-1)
            q.push(rightChild[i]);

            

        }

        return s.size()==n;
    }
};
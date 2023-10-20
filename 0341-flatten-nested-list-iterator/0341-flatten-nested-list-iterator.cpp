/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    int cur=0;
    vector<int>res;
    NestedIterator(vector<NestedInteger> &nestedList) {
        ans(nestedList);
        
    }

    int next() {
        return res[cur++];

    }

    bool hasNext() {
return cur<res.size();
    }
    void ans(vector<NestedInteger>&n)
    {
        for(auto &i:n)
        {
            if(i.isInteger())
            res.push_back(i.getInteger());

            else{
                ans(i.getList());
            }
        }
    }
    
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
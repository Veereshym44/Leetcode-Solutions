class WordDictionary {
public:
        unordered_map<int,vector<string>>mp;
    WordDictionary() {

    }
    
    void addWord(string word) {
    mp[word.length()].push_back(word);

        
    }
    
    bool search(string word) {
        int len=word.size();
        for(auto &temp:mp[len])
        {
            int i=0;

            for(i=0;i<len;i++)
            {
                if(word[i]=='.')continue;
                if(word[i]!=temp[i])
                break;
            }

            if(i==len)return true;
        }
        
                return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
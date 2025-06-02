class WordDistance {
public:
    unordered_map<string, vector<int> > hash;//<string, idxs>
    WordDistance(vector<string>& wordsDict) {
        for (int i = 0;i< wordsDict.size(); i++){
            auto it = hash.find(wordsDict[i]);
            if (it != hash.end()){
                hash[wordsDict[i]].push_back(i);
            }
            else{
                vector<int> idx;
                idx.push_back(i);
                hash[wordsDict[i]] = idx;
            }
        }
    }
    
    int shortest(const string& word1, const string& word2) {
        int ans = INT_MAX;
        vector<int> vec1 = hash[word1];
        vector<int> vec2 = hash[word2];
        int p1 = 0, p2 = 0;
        while (p1 < vec1.size() && p2 < vec2.size()) {
            int idx1 = vec1[p1], idx2 = vec2[p2];
            ans = min(ans, abs(idx1 - idx2));
            if (idx1 < idx2) p1++;
            else p2++;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};

/**
 * Your WordDistance object will be instantiated and called as such:
 * WordDistance* obj = new WordDistance(wordsDict);
 * int param_1 = obj->shortest(word1,word2);
 */
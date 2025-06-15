class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string> >hash;
        vector<vector<string> > ans;
        for (auto& str:strs){
            string original = str;
            sort(str.begin(),str.end());
            if(hash.find(str)!=hash.end()){
                hash[str].push_back(original);
            }
            else{
                vector<string> thishash;
                thishash.push_back(original);
                hash[str] = thishash;
            }
        }
        for (const auto& pair:hash){
            vector<string> thisstrs;
            for(auto& str:pair.second){
                thisstrs.push_back(str);
            }
            ans.push_back(thisstrs);
        }
        return ans;
    }
};
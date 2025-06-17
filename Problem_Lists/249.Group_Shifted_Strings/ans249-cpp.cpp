class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> hash;
        
        for (auto& str : strings) {
            string key;
            if (str.length() == 1) {
                key = "0"; // 单字符用"0"作为key
            } else {
                for (int i = 0; i < str.length() - 1; i++) {
                    int diff = (str[i + 1] - str[i] + 26) % 26; // 处理负数情况
                    key += to_string(diff) + ","; 
                }
            }
            hash[key].push_back(str); 
        }
        
        for (auto& pair : hash) {
            ans.push_back(pair.second);
        }
        
        return ans;
    }
};
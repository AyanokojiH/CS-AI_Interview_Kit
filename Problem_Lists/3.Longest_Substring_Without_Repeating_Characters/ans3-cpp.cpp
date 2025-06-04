class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int left = 0;
        int ans = 0;
        int len = s.length();
        for (int right = 0; right<s.length(); right++){
            if(hash.find(s[right]) == hash.end() || hash[s[right]]< left){ 
                //不在窗口里的情况
                hash[s[right]] = right;
                ans = max(ans, right-left+1);
            }
            else{ //窗口里已经有了，将left移到重复元素右边
                left = hash[s[right]] +1;
                hash[s[right]] = right;
            }
        }
        return ans;
    }
};
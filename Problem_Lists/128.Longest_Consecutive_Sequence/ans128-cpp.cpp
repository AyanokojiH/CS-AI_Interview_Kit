class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> hash;// <value, longest_sequence_as_first>;
        unordered_set<int> num_set;
        for (auto& num:nums){
            num_set.insert(num);
        }
        int ans = 0;
        for (int num:num_set){
            if(!num_set.count(num-1)){
                int curnum = num;
                int curlen = 1;
                while(num_set.count(curnum+1)){
                    curnum++;
                    curlen++;
                }
                ans = max(curlen,ans);
            }
        }
        return ans;
    }
};
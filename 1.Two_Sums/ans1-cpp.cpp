class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> hash;//<num,idx>
        for (int i=0;i<nums.size();i++){
            hash[nums[i]] = i;
        }
        for (int i=0;i<nums.size();i++){
            auto it = hash.find(target-nums[i]);
            if(it!=hash.end() && it->second!= i){
                ans.push_back(i);
                ans.push_back(it->second);
                return ans;
            }
        }
        return ans;
    }
};
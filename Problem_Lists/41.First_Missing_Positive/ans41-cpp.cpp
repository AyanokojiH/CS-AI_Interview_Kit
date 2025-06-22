class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // Key: Any wanted minimun integer can only either be nums.size()+1 
        // Or within the range of nums.size();
        int n = nums.size();
        for (int i=0;i<n;i++){
            if(nums[i]<0){
                nums[i] = (n+1);
            }
            if(nums[i] == 0){
                nums[i] += (n+1);
            }
        }
        // Now all the nums in the vector are all positive, 
        // so we use negative symbol to indicate that this num has presented.
        for(int i=0;i<n;i++){
            int num = abs(nums[i]);
            if (num<=n) {
                nums[num-1] = -abs(nums[num-1]);
            }
        }
        for (int i=0;i<n;i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return n+1;
    }
};
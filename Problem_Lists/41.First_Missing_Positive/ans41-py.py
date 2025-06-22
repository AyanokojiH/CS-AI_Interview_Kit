class Solution(object):
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        for idx, num in enumerate(nums):
            if num <= 0:
                nums[idx] = len(nums)+1

        for idx, num in enumerate(nums):
            num = abs(num)
            if 1<=num<=len(nums):
                nums[num-1] = -abs(nums[num-1])
        
        for idx, num in enumerate(nums):
            if num > 0:
                return idx+1
        
        return len(nums)+1
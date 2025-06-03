class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num_set = set(nums)
        ans = 0
        for num in num_set:
            if num-1 not in num_set:
                curnum = num
                curlen = 1
                while curnum+1 in num_set:
                    curnum+=1
                    curlen+=1
                ans = max(ans,curlen)
        return ans
        
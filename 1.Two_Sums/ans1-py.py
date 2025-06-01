class Solution(object):
    def twoSum(self, nums, target):
        hash = {}
        for idx, num in enumerate(nums):
            complement = target - num
            if complement in hash:
                return [hash[complement], idx]
            hash[num] = idx  # 先检查再存入，避免同一元素重复使用
        return []
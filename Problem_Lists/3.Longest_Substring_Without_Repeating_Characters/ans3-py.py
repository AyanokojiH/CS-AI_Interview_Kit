class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        hash = dict()
        left = 0
        ans = 0
        for idx, ch in enumerate(s):
            if ch not in hash.keys() or hash[ch]< left:
                hash[ch] = idx
                ans = max(idx-left+1, ans)
            else:
                left = hash[ch] +1
                hash[ch] = idx
        return ans
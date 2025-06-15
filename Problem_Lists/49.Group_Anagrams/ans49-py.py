class Solution(object):
    def groupAnagrams(self, strs):
        ans = {}
        for s in strs:
            sorted_s = tuple(sorted(s))  # 使用元组作为键（列表不可哈希）
            if sorted_s in ans:
                ans[sorted_s].append(s)  
            else:
                ans[sorted_s] = [s]      
        
        return list(ans.values())        
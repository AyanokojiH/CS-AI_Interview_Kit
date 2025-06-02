class WordDistance(object):

    def __init__(self, wordsDict):
        """
        :type wordsDict: List[str]
        """
        self.hash = {}
        for idx, word in enumerate(wordsDict):
            if word not in self.hash:
                self.hash[word] = []
            self.hash[word].append(idx)
            
        

    def shortest(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: int
        """
        ans = float('inf')
        list1, list2 = self.hash[word1], self.hash[word2]
        p1 = 0
        p2 = 0
        while(p1 < len(list1) and p2 < len(list2)):
            idx1, idx2 = list1[p1], list2[p2]
            ans = min(ans, abs(idx1 - idx2))
            if idx1 < idx2:
                p1 += 1
            else:
                p2 += 1
        return ans

# Your WordDistance object will be instantiated and called as such:
# obj = WordDistance(wordsDict)
# param_1 = obj.shortest(word1,word2)
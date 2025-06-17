class Solution(object):
    def groupStrings(self, strings):
        """
        :type strings: List[str]
        :rtype: List[List[str]]
        """
        toRet = {}
        for string in strings:
            if len(string) == 1:
                check = '0'
            else:
                check = [(ord(string[i+1]) - ord(string[i]) + 26)%26 for i in range(len(string)-1)]   #Python3 中不能直接处理char相减
            thisKey = tuple(check)
            if thisKey in toRet.keys():
                toRet[thisKey].append(string)
            else:
                toRet[thisKey] = [string]
        return list(toRet.values())
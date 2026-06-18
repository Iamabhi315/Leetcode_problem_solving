class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        n1 = len(word1)
        n2 = len(word2)
        i = 0
        res = ""

        while i<n1 and i<n2:
            res += word1[i] + word2[i]
            i+=1

        if i==n1:
            res += word2[i:]
        if i==n2:
            res += word1[i:]
        
        return res
class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        """
        :type sentence: str
        :type searchWord: str
        :rtype: int
        """
        s=sentence.split(" ")
        for i,s in enumerate(s):
            if s.startswith(searchWord):
                return i+1
        return -1
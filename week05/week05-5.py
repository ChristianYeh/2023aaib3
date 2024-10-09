class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a= s.split()
        return lem(a[-1])

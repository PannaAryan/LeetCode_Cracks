class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        L = 0
        ans = 0
        x = set()

        for i in range(len(s)):
            
            while s[i] in x:
                x.remove(s[L])
                L += 1
            if i - L + 1 > ans:
                ans = i - L + 1
            x.add(s[i])
        return ans

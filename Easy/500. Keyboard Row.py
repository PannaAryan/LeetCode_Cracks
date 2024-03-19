class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        r1, r2, r3 = set('qwertyuiop'), set('asdfghjkl'), set('zxcvbnm')

        ans = []

        for i in words:
            w = set(i.lower())
            if w<= r1 or w <=r2 or w<= r3:
                ans.append(i)
        
        return ans
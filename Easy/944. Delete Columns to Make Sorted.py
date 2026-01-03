class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        cnt = 0
        idx = len(strs[0])

        for i in range(0, idx):
            for j in range(0, len(strs)-1):
                if strs[j][i] > strs[j+1][i]:
                    cnt += 1
                    break
                else:
                    continue
        
        return cnt

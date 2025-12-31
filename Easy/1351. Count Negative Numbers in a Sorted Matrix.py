class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        n = len(grid)
        m = len(grid[0])
        cnt = 0

        for i in range(0, n):
            for j in range(0, m):
                if grid[i][j] < 0 :
                    cnt += 1

        return cnt

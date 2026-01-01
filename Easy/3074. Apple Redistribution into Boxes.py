class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        capacity.sort(reverse=True)
        cnt = 0

        for i in range(0, len(apple)):
            cnt += apple[i]
        
        res = 0

        for i in range(0, len(capacity)):
            if cnt == 0:
                break
            elif cnt < capacity[i]:
                return res+1
            else:
                res += 1
                cnt -= capacity[i]
        
        return res

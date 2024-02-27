class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maxx = 0
        one = 0

        for i in range(len(nums)):
            if nums[i]==1:
                one += 1
                if one > maxx:
                    maxx = one
            else:
                one = 0
        
        return maxx
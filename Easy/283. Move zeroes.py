class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        n=0
        t=0
        for i in range(len(nums)):
            if nums[i]==0:
                n += 1
            elif n>0:
                t = nums[i]
                nums[i]=0
                nums[i - n]=t

        
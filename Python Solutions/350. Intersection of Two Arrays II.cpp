class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        c1 = Counter(nums1)
        c2 = Counter(nums2)

        intersection = c1 & c2

        result = []

        for num, count in intersection.items():
            result.extend([num]*count)

        return result
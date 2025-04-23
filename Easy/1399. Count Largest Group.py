class Solution:
    def countLargestGroup(self, n: int) -> int:
        # Function to calculate sum of digits
        def digit_sum(num):
            total = 0
            while num > 0:
                total += num % 10
                num //= 10
            return total
        
        # Map to store frequency of each digit sum
        freq = {}
        
        # Calculate digit sum for each number and update frequency
        for i in range(1, n + 1):
            s = digit_sum(i)
            freq[s] = freq.get(s, 0) + 1
        
        # Find the maximum frequency
        max_freq = max(freq.values())
        
        # Count how many groups have the maximum frequency
        return sum(1 for count in freq.values() if count == max_freq)
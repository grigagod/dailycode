class Solution:
    def minOperations(self, nums: list[int], x: int) -> int:
        target_sum = sum(nums) - x
        if not target_sum:
            return len(nums)

        seen = {0: -1}
        target_size = prefix = 0
        for idx, num in enumerate(nums):
            prefix += num
            if prefix - target_sum in seen:
                target_size = max(target_size, idx - seen[prefix - target_sum])
            seen[prefix] = idx
        return len(nums) - target_size if target_size else -1

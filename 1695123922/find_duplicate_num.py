class Solution:
    def findDuplicate(self, nums: list[int]) -> int:
        seen = set()
        for num in nums:
            if num in seen:
                return num
            else:
                seen.add(num)
        return 0

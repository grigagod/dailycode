class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        numToIdx = {}
        for idx, num in enumerate(nums):
            complement = target - num
            if complement in numToIdx:
                return [idx, numToIdx[complement]]
            numToIdx[num] = idx

        return [0, 0]

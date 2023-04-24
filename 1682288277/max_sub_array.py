from typing import List

class Solution:
  def maxSubArray(self, nums: List[int]) -> int:
    global_max = - 10^5
    if len(nums) is 0:
      return 0

    local_max = 0
    for num in nums:
      local_max = max(num, num + local_max)
      if local_max > global_max:
        global_max = local_max

    return global_max

class Solution:
    def intersect(self, nums1: list[int], nums2: list[int]) -> list[int]:
        dst = []
        nums1.sort()
        nums2.sort()
        idx1, idx2 = 0, 0
        while idx1 < len(nums1) and idx2 < len(nums2):
            if nums1[idx1] < nums2[idx2]:
                idx1 += 1
                continue
            if nums2[idx2] < nums1[idx1]:
                idx2 += 1
                continue
            dst.append(nums1[idx1])
            idx1 += 1
            idx2 += 1
        return dst

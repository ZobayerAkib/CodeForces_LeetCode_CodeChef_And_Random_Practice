class Solution:
    def numberOfPairs(self, nums1: List[int], nums2: List[int], k: int) -> int:
        goodPair=0
        for x in range(len(nums1)):
            for y in range(len(nums2)):
                if nums1[x] % (nums2[y]*k) == 0:
                    goodPair+=1
        
        return goodPair

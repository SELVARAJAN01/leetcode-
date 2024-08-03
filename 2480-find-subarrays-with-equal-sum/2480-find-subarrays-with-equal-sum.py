class Solution:
    def findSubarrays(self, nums: List[int]) -> bool:
        hashset=set({})
        for i in range(len(nums)-1):
            if nums[i]+nums[i+1] in hashset:
                return True
            hashset.add(nums[i]+nums[i+1])
        return False
                
        
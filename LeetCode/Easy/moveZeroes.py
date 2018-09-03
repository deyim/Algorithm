class Solution:
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        # nums.sort()
        length = len(nums)
        
        idx = 0
        for i in range(length):
            if(nums[i] != 0):
                nums[i],nums[idx] = nums[idx],nums[i]
                idx += 1
        
        print(nums)
        
            
            
        
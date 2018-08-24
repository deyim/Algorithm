class Solution:
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        cnt0 = 0; cnt1 = 0; cnt2 = 0; 
        
        for num in nums:
            if num == 0:
                cnt0 += 1
            elif num == 1:
                cnt1 += 1
            else:
                cnt2 += 1
        # print(cnt0, cnt1, cnt2)
        
        for i in range(len(nums)):
            if 0 <= i < cnt0 :
                nums[i] = 0
            elif cnt0 <= i < cnt0+cnt1: #이걸 놓치기가 쉽네,,
                nums[i] = 1
            else:
                nums[i] = 2
            # print(i,nums)


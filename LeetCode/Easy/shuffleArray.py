class Solution:
    
    nums = []
    shuffled = []

    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        for num in nums:
            self.nums.append(num)
        

    def reset(self):
        """
        Resets the array to its original configuration and return it.
        :rtype: List[int]
        """
        shuffled = nums

    def shuffle(self):
        """
        Returns a random shuffling of the array.
        :rtype: List[int]
        """
        copied = self.nums
        while len(copied):
            idx = copied[random(len(copied))]           
            shuffled.append( copied.remove(idx))
        


# Your Solution object will be instantiated and called as such:
# obj = Solution(nums)
# param_1 = obj.reset()
# param_2 = obj.shuffle()
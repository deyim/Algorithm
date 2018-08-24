# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    cur = 1
    deepest = 0
    def toLeft(self, root):
       
        self.cur+=1
        
        if self.deepest < self.cur:
            self.deepest = self.cur
        root = root.left
        # print(root.val, self.cur, self.deepest)
        if root.left:
            self.toLeft(root)
            self.cur-=1
        if root.right:
            self.toRight(root)
            self.cur-=1
       
        
        
    def toRight(self, root):
        
        self.cur+=1
        
        if self.deepest < self.cur:
            self.deepest = self.cur
        root = root.right
        # print(root.val, self.cur, self.deepest)
        if root.left:
            self.toLeft(root)
            self.cur-=1
        if root.right:
            self.toRight(root)
            self.cur-=1
        
        
        
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root == None:
            return 0
        if root.left == None and root.right == None:
            return 1
        
        if root.left:
            self.toLeft(root)
            self.cur-=1
        if root.right:
            self.toRight(root)
        
        return self.deepest
        
        
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    res = []
    def recursion(self, root):
        if root:
            self.toLeft(root)
            self.res.append(root.val)
            self.toRight(root)
        
    def toLeft(self,root):
        if root.left:
            root = root.left
            self.recursion(root)
            

    def toRight(self,root):
        if root.right:
            root = root.right
            self.recursion(root)
            
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        self.res.clear()
        self.recursion(root)
        
        return self.res

    #failed case: []
    #clear
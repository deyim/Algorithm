# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    flag = True
    
    def subtreeValidChk(self, root, subMin, subMax):
        # print(root.val, subMin, subMax)
        
        if root.val <= subMin or root.val >= subMax:
            self.flag = False
            return
        
        if root.left:
            self.subtreeValidChk(root.left, subMin, root.val)
        if root.right:
            self.subtreeValidChk(root.right, root.val, subMax)
            
            
        
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root != None:
            self.subtreeValidChk(root,-99999999999,99999999999)
        return self.flag
    
    #[1,1]
    #[2,1,3]
    #[10,5,15,null,null,6,20] 바로 아래 child만 검사하면 안되네,,,,
    #[2147483647]






# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

# class Solution:
#     flag = True
#     treeMin = -99999
#     treeMax = 99999
#     #recursion 떄문에 나오면서 treeMin, treeMax값이바뀐걸 리컬젼 나오면 모르니깐 그냥 계속 진행하고
#     # 그래서 결국 앞에서 변경된 min, max 값이 영향을 미치게 됨 
    
#     def validChk(self, root, subMin, subMax):
#         print(self.flag, root.val, self.treeMin, self.treeMax)
#         if root.left:
#             if root.left.val >= self.treeMin:
#                 self.flag = False
#                 print("false!-left", root.val)
#                 return
#             self.treeMin = root.left.val
#             self.validChk(root.left)
#         if root.right:
#             if root.right.val <= self.treeMax:
#                 self.flag = False
#                 print("false!-right", root.val)
#                 return
#             self.treeMax = root.right.val
#             self.validChk(root.right)
            
        
#     def isValidBST(self, root):
#         """
#         :type root: TreeNode
#         :rtype: bool
#         """
#         if root != None:
#             self.treeMin = root.val
#             self.treeMax = root.val
#             self.validChk(root)
#         return self.flag
    
#     #[1,1]
#     #[2,1,3]
#     #[10,5,15,null,null,6,20] 바로 아래 child만 검사하면 안되네,,,,

# # Definition for a binary tree node.
# # class TreeNode:
# #     def __init__(self, x):
# #         self.val = x
# #         self.left = None
# #         self.right = None

# class Solution:
#     flag = True
#     def validChk(self, root):
#         # print(root.val)
#         if root.left and root.left.val > root.val:
#             self.flag = False
#             return 
#         elif root.right and root.right.val < root.val:
#             self.flag = False
#             return 
#         else:
#             if root.left: self.validChk(root.left)
#             if root.right: self.validChk(root.right)
        
#     def isValidBST(self, root):
#         """
#         :type root: TreeNode
#         :rtype: bool
#         """
#         if root==None:
#             return self.flag
#         self.validChk(root)
#         return self.flag
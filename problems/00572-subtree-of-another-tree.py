# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        def serialise(root):
            if not root:
                return ",#"
            else:
                return f',{root.val}'+serialise(root.left)+serialise(root.right)
        r=serialise(root)
        print(r)
        sr=serialise(subRoot)
        print(sr)
        if sr in r:
            return True
        else:
            return False  
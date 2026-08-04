# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root:
            left_depth=self.maxDepth(root.left)
            right_depth=self.maxDepth(root.right)
            #print(root.val, left_depth, right_depth)
            depth=max(left_depth, right_depth)
            depth+=1
            #print(root.val, depth)
            return depth
        else:
            return 0
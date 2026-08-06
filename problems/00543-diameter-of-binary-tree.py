# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.d=0
        def ret_ht(root):
            if not root:
                return 0
            else:
                lh=ret_ht(root.left)
                rh=ret_ht(root.right)
                cd=rh+lh
                self.d=max(self.d, cd)
                return 1+max(lh, rh)
        ret_ht(root)
        return self.d

        
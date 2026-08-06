# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if p and q and p.val==q.val:
            l=self.isSameTree(p.left, q.left)
            r=self.isSameTree(p.right, q.right)
            return l and r
        elif not p and not q:
            return True
        else:
            return False

        
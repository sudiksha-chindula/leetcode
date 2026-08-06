# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        def isEqual(root, subRoot):
            if root and subRoot and root.val==subRoot.val:
                l=isEqual(root.left, subRoot.left)
                r=isEqual(root.right, subRoot.right)
                return l and r
            elif root and subRoot and root.val!=subRoot.val:
                return False
            elif not root and subRoot:
                return False
            elif not subRoot and root:
                return False
            else:
                return True
        if root and not subRoot:
            return True
        elif not root and subRoot:
            return False
        elif not root and not subRoot:
            return True
        else:
            if isEqual(root, subRoot):
                return True
            else:
                return self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)
            
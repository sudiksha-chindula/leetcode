# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def getheight(root: Optional[TreeNode])->int:
            if not root:
                return 0
            else:
            
                lh=getheight(root.left)
                rh=getheight(root.right)
                if lh==-1:
                    return -1
                if rh==-1:
                    return -1
                if lh>rh:
                    if lh-rh>1:
                        return -1
                else:
                    if rh-lh>1:
                        return -1
                return 1+max(lh, rh)
        getheight(root)
        if getheight(root)!=-1:
            return True       
        else:
            return False 
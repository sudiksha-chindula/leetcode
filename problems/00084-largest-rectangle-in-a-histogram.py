class Solution(object):
    def largestRectangleArea(self, heights):
        """
        :type heights: List[int]
        :rtype: int
        """
        left = 0
        right = 1
        max_area =0
        if(len(heights)==1):
            area=1*heights[0]
            return area
        for i in range(len(heights)-1):
            if heights[left]!=0 and heights[right!=0]:
                width=2
                height=min(heights[left], heights[right])
            elif heights[left]==0:
                width=1
                height=heights[right]
            else:
                width=1
                height=heights[left]
            area=width*height
            max_area=max(area,max_area)
            right+=1
            left+=1
        return max_area


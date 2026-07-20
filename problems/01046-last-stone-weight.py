class Stone:
    def __init__(self, weight):
        self.weight = weight
    def __lt__(self, other):
        if self.weight>other.weight:
            return True

class Solution(object):
    def lastStoneWeight(self, stones: list[int]) -> int:
        max_heap = [Stone(s) for s in stones]
        heapq.heapify(max_heap)

        while len(max_heap)>1:
            s1 = heapq.heappop(max_heap)
            s2 = heapq.heappop(max_heap)

            if s1.weight==s2.weight:
                pass
            else:
                heapq.heappush(max_heap, Stone((s1.weight-s2.weight)))

        if len(max_heap)==1:
            return max_heap[0].weight
        return 0
            
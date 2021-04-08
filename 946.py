#946. Validate Stack Sequences

class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        s = []
        i = 0
        for e in pushed:
            s.append(e)
            while s and s[-1] == popped[i]:
                s.pop()
                i += 1
        return i == len(popped)
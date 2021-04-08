#1021. Remove Outermost Parentheses

class Solution(object):
    def removeOuterParentheses(self, S):
        """
        :type S: str
        :rtype: str
        """
        stack= []
        left=0
        right=0
        start=0
        length= len(S)
        for c in S:
            if(start==0):
                stack.append(c)
                stack.pop()
                start=1
            else:
                if(c=="("):
                    left= left+1
                    stack.append(c)
                if(c==")"):
                    right= right+1
                    stack.append(c)
                if(left==right-1):
                    stack.pop()
                    start=0
                    left=0
                    right=0
        return "".join(stack)
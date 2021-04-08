#20. Valid Parentheses

class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        p = {')' : '(', ']': '[', '}' : '{'}
        stack = []
        for c in s:
            if c=="("or c=="[" or c=="{":
                stack.append(c)
            elif c==" ":
                continue
            else:
                if not stack or stack[-1]!= p[c]:
                    return False
                stack.pop()
        if stack!=[]:
            return False
        else:
            return True
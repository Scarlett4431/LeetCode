#150. Evaluate Reverse Polish Notation

class Solution(object):
    def evalRPN(self, tokens):
        """
        :type tokens: List[str]
        :rtype: int
        """
        stack= []
        for t in tokens:
            if t!='+' and t!='-' and t!='*' and t!='/':
                stack.append(t)
            else:
                b = int(stack.pop())
                a = int(stack.pop())
                if t=='+':
                    r= a+b
                    stack.append(r)
                if t=='-':
                    r= a-b
                    stack.append(r)
                if t=='*':
                    r= a*b
                    stack.append(r)
                if t=='/':
                    if a*b <0:
                        r= -(abs(a)//abs(b))
                    else: 
                        r= a//b
                    stack.append(r)
        q= stack.pop()
        return q
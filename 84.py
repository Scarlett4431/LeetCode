class Solution(object):
    def backspaceCompare(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: bool
        """
        stack1= []
        stack2= []
        i=0
        j=0
        for s in S:
            if i!=0 or s!='#':
                stack1.append(s)
                i=i+1
                if s== '#':
                    stack1.pop()
                    stack1.pop()
        for t in T:
            if(j!=0 or t!='#'):
                stack2.append(t)
                j= j+1
                if t== '#':
                    stack2.pop()
                    stack2.pop()
        while stack1 and stack2:
            if stack1.pop()!=stack2.pop():
                return False
        return True

S= "#a#c"
T= "#ac"
print(Solution.backspaceCompare(Solution, S,T))


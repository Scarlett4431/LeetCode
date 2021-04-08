#921. Minimum Add to Make Parentheses Valid
class Solution:
    def minAddToMakeValid(self, S: str) -> int:
        l= 0
        n= 0
        for c in S:
            if c=='(':
                l= l+1
                n= n+1
            if c==')':
                if l!=0:
                    l= l-1
                    n= n-1
                else:
                    n= n+1
        return n
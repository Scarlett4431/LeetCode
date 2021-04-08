class Solution(object):
    def xorOperation(self, n, start):
        """
        :type n: int
        :type start: int
        :rtype: int
        """
        array= []
        for i in range(0,n):
            array.append(start+ 2*i)
        for j in range(0,n-1):
            temp= array[j]^array[j+1]
            array[j+1]= temp
        return array[-1]
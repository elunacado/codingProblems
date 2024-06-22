class Solution(object):
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        # Convert to binary
        binary = bin(num)[2:]
        # Convert to complement
        complement = ''
        for i in binary:
            if i == '1':
                complement += '0'
            else:
                complement += '1'
        #Convert the complement to the integer
        solved = int(complement, 2)
        return solved
Solution().findComplement(5)
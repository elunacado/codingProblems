class Solution(object):
    def halvesAreAlike(self, s):
        """
        :type s: str
        :rtype: bool
        """
        #Set which vowels I want to check for
        vowels = "aeiouAEIOU"
        #Split the string in half
        resFirstHalf = s[:len(s)//2]
        resSecondHalf =  s[len(s)//2:]
        #Count the vowels in the first half and the second half
        firstHalfCount = sum(resFirstHalf.count(v) for v in vowels)
        secondHalfCount = sum(resSecondHalf.count(v) for v in vowels)
        #If the counts are equal, return True
        if firstHalfCount == secondHalfCount:
            return True
            print("True")
#Test case
Solution().halvesAreAlike("book") 
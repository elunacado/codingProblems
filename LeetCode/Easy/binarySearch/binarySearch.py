class Solution(object):
    def binarySearch(self, nums, head, tail, objective):
        #As long as the array doesn't overflow
        while head <= tail:
            #We find the middle index
            mid = tail + (head - tail) // 2
            #if the middle is our objective then return it
            if nums[mid] == objective:
                return mid
            #if the number in the middle is smaller than the objective 
            elif nums[mid] < objective:
                #then rewrite the head as the middle + 1
                head = mid + 1
            else:
                #OR then rewrite the tail as the middle - 1
                tail = mid - 1
        #if the objective isn't found then return -1
        return -1

    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        #set the index for the beginning and the tail
        head = 0
        tail = len(nums) - 1
        #the result is the call of the function of binary search
        result = self.binarySearch(nums, head, tail, target)
        return result
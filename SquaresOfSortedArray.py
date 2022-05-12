class Solution(object):
    def sortedSquares(self, nums):
        i = 0
        e = len(nums) 
        j = e - 1
        temp = []
        while(e > 0):
            if (nums[i]*nums[i] > nums[j] * nums[j]):
                temp.insert(0, nums[i] * nums[i])
                i += 1
            else:
                temp.insert(0, nums[j] * nums[j])
                j -= 1
            e -= 1
        return(temp)
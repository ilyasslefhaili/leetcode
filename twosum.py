class Solution:
    def twoSum(self, n: List[int], target: int) -> List[int]:
        l = 0
        h = len(n) - 1
        arr = [1,2]
        while (l <= h):
            s = n[h] + n[l]
            
            if(s > target):
                h -= 1
            elif (s < target):
                l += 1
            else:
                arr[0] = l + 1
                arr[1] = h + 1
                return (arr)
        arr[0] = l + 1
        arr [1] = h + 1
        return (arr)
                
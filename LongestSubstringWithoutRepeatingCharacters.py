class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        temp =[]
        i = 0
        while i < len(s):
            a =[]
            for j in s[i:]:
                if j not in a:
                    a.append(j)
                else:
                    break
            i += 1
            temp.append(len(a))
        if len(temp) > 0:
            return max(temp)
        return (0)
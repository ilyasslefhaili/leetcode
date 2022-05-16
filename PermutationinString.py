class Solution:
    def compare(self, s1: str, s2: str,s:int)->int:
        i = 0
        while (i < s):
            if (s2.find(s1[i]) == -1):
                return (0)
            i+=1
        return(1)
    def checkInclusion(self, s1: str, s2: str) -> bool:
        j  = 0
        lens1 = len(s1)
        lens2 = len(s2)
        asci = sum(ord(ch) for ch in s1)
        assci = sum(ord(ch) for ch in s2)
        if (asci > assci):
            return(0)
        if (lens1 > lens2):
            return(0);
        i = 0
        while (i < lens2):
            j = 0
            c = ""
            while (i + j < lens2 and j < lens1):
                c += s2[i + j]
                j+=1
            if (asci == sum(ord(ch) for ch in c) and self.compare(s1,c,lens1) == 1):
                return(1)
            i+=1
        return (0)
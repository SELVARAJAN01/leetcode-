class Solution:
    def isPalindrome(self, x: int) -> bool:
        s=str(x)
        l=0
        r=len(s)-1
        while l<=r:
            if (s[l])==(s[r]):
                l+=1
                r-=1
            else:
                return False
        return True
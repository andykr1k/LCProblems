class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0:
            return 0
        i = 0
        while (i<=x):
            if (i*i<=x):
                i=i+1
            else:
                break
        return i - 1
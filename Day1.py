class Solution(object):
    def isPalindrome(self, x):
        if x<0:
            return False
        x1=str(x)
        if (x1==x1[::-1]):
            return True
        else:
            return False
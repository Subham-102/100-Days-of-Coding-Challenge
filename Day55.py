class Solution(object):
    def isAnagram(self, s, t):
        sorteds = ''.join(sorted(s))
        sortedt = ''.join(sorted(t))
        if(sorteds==sortedt):
            return 1
        else:
            return 0
        return        
       
        
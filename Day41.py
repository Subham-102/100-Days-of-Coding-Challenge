class Solution(object):
    def findDuplicate(self, nums):
        l=len(nums)
        nums.sort()
        i=0
        j=i+1
        while(j<l):
            if(nums[i]==nums[j]):
                return nums[i]
            else:
                i+=1
                j+=1
        return


        
    
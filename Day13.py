class Solution(object):
    def twoSum(self, numbers, target):
        num_indices = {}
        for i, num in enumerate(numbers):
            com = target - num
            if com in num_indices:
                return [num_indices[com] + 1, i + 1]
            num_indices[num] = i
        return []
                    
        
        
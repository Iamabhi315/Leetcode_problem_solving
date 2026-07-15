class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        res = []
        temp = 0
        for value in nums:
            temp += value
            res.append(temp)
        
        return res
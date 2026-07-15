class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        res = float("-inf")
        for welth in accounts:
            temp = 0
            for value in welth:
                temp += value
            res = max(temp,res)
        
        return res
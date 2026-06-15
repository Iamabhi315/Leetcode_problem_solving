class Solution(object):
    def isArraySpecial(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        new_lst = list(map(lambda x: (x%2 == 0),nums))
        for i in range(1,len(nums)):
            if new_lst[i-1] == new_lst[i]:
                return False

        return True
        
class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []

        mp = {
            ')' : '(',
            ']' : '[',
            '}' : '{'
        }

        for c in s:
            if c in "([{":
                stack.append(c)
            else:
                if not stack or stack[-1] != mp[c]:
                    return False
                stack.pop()

        return len(stack) == 0
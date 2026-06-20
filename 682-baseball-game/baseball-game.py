class Solution(object):
    def calPoints(self, operations):
        """
        :type operations: List[str]
        :rtype: int
        """
        stack, res = [], 0
        for op in operations:
            if op == "+":
                res += stack[-1] + stack[-2]
                stack.append(stack[-1] + stack[-2])
            elif op == "D":
                res += (2 * stack[-1])
                stack.append(2 * stack[-1])
            elif op == "C":
                res -= stack.pop()
            else:
                res += int(op)
                stack.append(int(op))
        return res
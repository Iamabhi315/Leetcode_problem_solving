class Solution(object):
    def evalRPN(self, tokens):
        """
        :type tokens: List[str]
        :rtype: int
        """
        stack = []

        for op in tokens:
            if op == '+':
                b = stack.pop()
                a = stack.pop()
                stack.append(a+b)
            
            elif op == '-':
                b = stack.pop()
                a = stack.pop()
                stack.append(a-b)
            
            elif op == '*':
                b = stack.pop()
                a = stack.pop()
                stack.append(a*b)
            
            elif op == '/':
                b = stack.pop()
                a = stack.pop()
                stack.append(int(float(a) / b))
            
            else:
                stack.append(int(op))

        return stack[-1]
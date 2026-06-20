class Solution(object):
    def calPoints(self, operations):
        """
        :type operations: List[str]
        :rtype: int
        """
        record = []
        for c in operations:
            if c == "C":
                record.pop()
            elif c == "+":
                record.append(record[-1] + record[-2])
            elif c == "D":
                record.append(2*record[-1])
            else:
                record.append(int(c))
        
        return sum(record)
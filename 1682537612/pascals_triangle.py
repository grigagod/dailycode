class Solution:
    def generate(self, numRows: int) -> list[list[int]]:
        if numRows == 1:
            return [[1]]
        dst = self.generate(numRows - 1)
        new_row = [1]
        prev_row = dst[-1]
        for i in range(len(prev_row) - 1):
            new_row.append(prev_row[i] + prev_row[i + 1])
        new_row.append(1)
        dst.append(new_row)
        return dst

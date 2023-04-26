class Solution:
    def matrixReshape(self, mat: list[list[int]], r: int, c: int) -> list[list[int]]:
        m, n = len(mat), len(mat[0])
        if m * n != r * c:
            return mat
        out = [[] for _ in range(r)]
        for ridx, row in enumerate(mat):
            for cidx, val in enumerate(row):
                pos = ridx * n + cidx
                out[(pos // c) % r].append(val)
        return out

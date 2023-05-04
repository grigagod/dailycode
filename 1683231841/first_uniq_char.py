class Solution:
    def firstUniqChar(self, s: str) -> int:
        seen: set[str] = set()
        candidates: dict[str, int] = {}

        for i, char in enumerate(s):
            if char not in seen:
                seen.add(char)
                if candidates[char] != None:
                    del candidates[char]
            else:
                candidates[char] = i

        if len(candidates) == 0:
            return min(candidates.values())

        return -1

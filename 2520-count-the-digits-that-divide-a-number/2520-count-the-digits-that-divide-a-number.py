class Solution:
    def countDigits(self, num: int) -> int:
        return sum(1 for x in str(num) if num % int(x) == 0)

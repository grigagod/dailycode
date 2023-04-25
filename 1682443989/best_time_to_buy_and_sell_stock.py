class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        max_profit, min_price = 0, prices[0]

        for price in prices:
            max_profit = max(max_profit, price - min_price)
            min_price = min(min_price, price)

        return max_profit

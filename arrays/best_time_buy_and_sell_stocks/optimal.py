# Leet code Solution 

# class Solution:
#     def maxProfit(self, prices: List[int]) -> int:
#         minValue = prices[0]
#         maxProfit = 0

#         for idx in range(1, len(prices)):
#             if prices[idx] < minValue:
#                 minValue = prices[idx]
#             elif maxProfit < prices[idx] - minValue:
#                 maxProfit = prices[idx] - minValue
#         return maxProfit


# from typing import List
# def best_time_to_buy_and_sell(nums: List[int]) -> int:
#     maxProfit = 0
#     minVal = nums[0]
    
#     # For Min Val 
#     for idx in range(1, len(nums)):
#         if(minVal > nums[idx]):
#             minVal = nums[idx]
#         elif (maxProfit < nums[idx] - minVal):
#             maxProfit = nums[idx] - minVal
#     return maxProfit
# result = best_time_to_buy_and_sell([7,6,4,3,1])
# print(result)





# cd /Users/muhammadabdullah/all_time_imp_dsa/best_time_buy_and_sell_stocks/

# python3 optimal.py

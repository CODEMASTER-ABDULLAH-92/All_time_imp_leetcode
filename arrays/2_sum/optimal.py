# from typing import List

# class Solution:
#     def twoSum(self, nums: List[int], target: int) -> List[int]:
#         hashmap = {}
        
#         for i, num in enumerate(nums):
#             complement = target - num
            
#             if complement in hashmap:
#                 return [hashmap[complement], i]
            
#             hashmap[num] = i


from typing import List
def twoSum(li: List[int], target: int) -> List[int]:
    hashmap = {}
    
    for idx, val in enumerate(li):
        complement = target - val
        
        if complement in hashmap:
            return [hashmap[complement], idx]
        
        hashmap[val] = idx

result = twoSum([2,7,11,15], 9)
# print(result)



# Notes 
"""
a + b = target 

a = 2 
b = 7 

2 + 7 = 9 
b = target - a
7 = 9 - 2
7 = 7

2 , 7 == a, b
 
 
"""

    

# enumerate() is a built-in Python function that allows you to loop over an iterable (like a list) and get:

# ===> The index.
# ===> The value.

# at the same time.

li = [1,2,3,4,5]
# i ==> index
# l ==> val
for idx , val in enumerate(li):
    print("index: ",idx," Value: ", val)
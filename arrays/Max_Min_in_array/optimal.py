from typing import List

def min_max(nums:List[int]) -> List[int]:
    min_value = nums[0]
    max_value = nums[0]
    
    # for min_value 
    for idx in range(1,len(nums)):
        if min_value > nums[idx]:
            min_value = nums[idx]
        if max_value < nums[idx]:
            max_value = nums[idx]
    return [min_value, max_value]
result = min_max([0,7,9,8,3,2,9,1,12])
print(result)
            
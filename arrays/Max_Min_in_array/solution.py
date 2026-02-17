from typing import List

def min_max(nums:List[int]) -> List[int]:
    min_value = nums[0]
    max_value = nums[0]
    
    # for max value 
    for idx in range(1, len(nums)):
        if max_value < nums[idx]:
            max_value = nums[idx]
    
    # for min value 
    for idx in range(1, len(nums)):
        if min_value > nums[idx]:
            min_value = nums[idx]

    return [max_value,min_value]
result = min_max([4,7,3,2,1,0])
print(result)
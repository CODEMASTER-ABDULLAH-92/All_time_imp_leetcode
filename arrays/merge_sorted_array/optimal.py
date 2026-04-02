# from typing import List

# # nums [1,2,3,0,0,0]
# # nums2 [2,5,6]



# def merge_array(nums1: List[int], m: int, nums2: List[int], n: int) -> List[int]:
#     i = m - 1          # pointer for nums1 valid elements
#     j = n - 1          # pointer for nums2
#     k = m + n - 1      # pointer for placement

#     # Merge from back
#     while i >= 0 and j >= 0:
#         if nums2[j] > nums1[i]:
#             nums1[k] = nums2[j]
#             j -= 1
#         else:
#             nums1[k] = nums1[i]
#             i -= 1
#         k -= 1

#     # If nums2 still has elements left
#     while j >= 0:
#         nums1[k] = nums2[j]
#         j -= 1
#         k -= 1
#     return nums1

# res = merge_array([1,2,3,0,0,0],3,[2,5,6],3)
# print(res)



from typing import List
def merge(nums1: List[int], m:int, nums2:List[int], n:int) -> List[int]:
    i = m - 1
    j = n - 1
    k = m + n - 1
    
    while i >= 0 and j >= 0:
        if nums1[i] > nums2[j]:
            nums1[k] = nums1[i]
            i -= 1
        else:
            nums1[k] = nums2[j]
            j -=1
        k -=1
    while j>=0:
        nums1[k] = nums2[j]
        j-=1
        k-=1
        
    return nums1
res = merge([1,2,3,0,0,0],3,[2,4,5],3) 
print(res)          
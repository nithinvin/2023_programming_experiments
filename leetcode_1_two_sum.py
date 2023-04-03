from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        index1 = 0
        index2 = index1 + 1
        while index1 < len(nums):
            if nums[index1] + nums[index2] == target:
                break
            index2 += 1
            if index2 == len(nums):
                index1 += 1
                index2 = index1 + 1
        returnList = [index1, index2]
        return returnList
my_solution = Solution()
my_nums = [2, 7, 11, 15]
target = 13
result = my_solution.twoSum(my_nums, target)
print("index1 = ", result[0], "index2 = ", result[1])

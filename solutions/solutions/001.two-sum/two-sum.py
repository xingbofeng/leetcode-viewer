class Solution:
  def twoSum(self, nums, target):
    length = len(nums)
    hashmap = {}
    for i in range(0,length):
      x = nums[i]
      if target - x in hashmap:
        return [hashmap[target -x], i]
      else:
        hashmap[x] = i
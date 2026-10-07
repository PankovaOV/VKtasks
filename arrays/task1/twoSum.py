def two_sum(nums, target):
    left = 0
    right = len(nums) - 1

    while left < right:
        cur_sum = nums[left] + nums[right]

        if cur_sum == target:
            return [left, right]
        elif cur_sum < target:
            left += 1
        else:
            right -= 1

    return []

print(two_sum([3, 8, 9, 11, 16, 18, 19, 21], 25))
#include <stdbool.h>

bool twoSum(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return true;
        } else if (sum < target) {
            left++;   // сумма слишком маленька€ Ч увеличиваем левый
        } else {
            right--;  // сумма слишком больша€ Ч уменьшаем правый
        }
    }

    return false;
}

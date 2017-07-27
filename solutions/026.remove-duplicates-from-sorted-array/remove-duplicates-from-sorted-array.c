int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    int result = numsSize;
    for(int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            result--;
        } else {
            nums[i - (numsSize - result) + 1] = nums[i + 1];
        }
    }
    return result;
}
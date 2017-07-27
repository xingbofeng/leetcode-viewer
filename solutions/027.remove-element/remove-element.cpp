class Solution {
public:
  int removeElement(vector<int>& nums, int val) {
    if (nums.size() == 0) {
      return 0;
    }
    int number = 0;
    for (int i = 0; i < nums.size(); ++i) {
      if (nums[i] == val) {
        number++;
      }
    }
    int temp;
    for (int i = 0; i < nums.size() - 1; ++i) {
      for (int j = i + 1; j < nums.size(); ++j) {
        if (nums[j] != val) {
          temp = nums[i];
          nums[i] = nums[j];
          nums[j] = temp;
        }
      }
    }
    return (nums.size() - number);
  }
};
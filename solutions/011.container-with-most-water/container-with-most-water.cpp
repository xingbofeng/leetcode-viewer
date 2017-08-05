class Solution {
public:
  int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int result = 0;
    while(left < right) {
      bool checkheight = (height[left] < height[right]);
      int minheight = checkheight ? height[left] : height[right];
      int newarea = minheight * (right - left);
      result = (result > newarea) ? result : newarea;
      checkheight ? left++ : right--;
    }
    return result;
  }
};
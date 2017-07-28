class Solution {
public:
  int myAtoi(string str) {
    int flag = 1;
    int result = 0;
    if (str.size() == 0) {
      return 0;
    }
    int i = 0;
    while(i < str.size() && str[i] == ' ') {
      i++;
      continue;
    }
    if (str[i] == '+' || str[i] == '-') {
      flag = str[i++] == '+' ? 1 : -1;
    }
    while(i < str.size() && str[i] >= '0' && str[i] <= '9') {
      if (result > INT_MAX / 10 || (result == INT_MAX / 10 && str[i] - '0' > 7)) {
        return (flag == 1) ? INT_MAX : INT_MIN;
      }
      result = 10 * result + (str[i++] - '0');
    }
    return result * flag;
  }
};
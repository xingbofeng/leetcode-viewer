class Solution {
public:
  string convert(string s, int numRows) {
    if (numRows == 1 || numRows > s.size()) {
      return s;
    }
    vector<string> array(numRows, "");
    for (int i = 0; i < s.size(); ++i) {
      int index = i % (numRows - 1);
      int flag = i / (numRows - 1);
      if (flag % 2 == 0) {
        array[index] += s[i];
      } else {
        array[numRows - 1 - index] += s[i];
      }
    }
    string result = "";
    for (int i = 0; i < array.size(); ++i) {
      result += array[i];
    }
    return result;
  }
};
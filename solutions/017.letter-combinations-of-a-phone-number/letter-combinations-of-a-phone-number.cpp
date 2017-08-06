class Solution {
public:
  vector<string> letterCombinations(string digits) {
    if (digits.empty()) {
      return vector<string> ();
    }
    const string map[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    vector<string> result;
    result.push_back("");
    for (int i = 0; i < digits.size(); ++i) {
      int index = int(digits[i]) - 48;
      if (map[index].empty()) {
        continue;
      }
      vector<string> tmp;
      for (int j = 0; j < map[index].size(); ++j) {
        for (int k = 0; k < result.size(); ++k) {
          tmp.push_back(result[k] + map[index][j]);
        }
      }
      result.swap(tmp);
    }
    return result;
  }
};
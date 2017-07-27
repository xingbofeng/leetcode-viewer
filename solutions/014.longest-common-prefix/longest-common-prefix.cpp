class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty()){
          return "";
        }
        string result = "";
        for (int i = 0; i < strs[0].size(); ++i) { // 对第一个字符串每个位置循环
          char ch = strs[0][i];
          for (int j = 0; j < strs.size(); ++j) { // 判断第j个字符串的第i个位置是否与第一个字符串相等
            if (strs[j][i] !=ch || i == strs[j].size()) {
              // 如果有不相等的或者已经循环到某个字符串的末尾，直接返回
              return result;
            }
          }
          // 否则把现今字符入栈
          result.push_back(ch);
        }
        return result;
    }
};
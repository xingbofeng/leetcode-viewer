class Solution {
public:
  string longestPalindrome(string s) {
    string longest = "";
    for (int k = 0; k < s.size(); ++k) {
      int i = k, j = k;
      while(i >= 0 && j <= s.size() - 1) {
        if (s[i] != s[j]) {
          break;
        } else {
          i--;
          j++;
        }
      }
      // 还原一位
      i++;
      j--;
      if (j - i + 1 > longest.size()) {
        longest = s.substr(i, j - i + 1); 
      }
      // 对于偶回文串的处理
      i = k, j = k;
      if (s[k] == s[k + 1]) {
        j = k + 1;
      }
      while(i >= 0 && j <= s.size() - 1) {
        if (s[i] != s[j]) {
          break;
        } else {
          i--;
          j++;
        }
      }
      // 还原一位
      i++;
      j--;
      if (j - i + 1 > longest.size()) {
        longest = s.substr(i, j - i + 1); 
      }
    }
    return longest;
  }
};
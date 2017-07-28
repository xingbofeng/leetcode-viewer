class Solution {
public:
  int strStr(string haystack, string needle) {
    if (needle.size() == 0) {
      return 0;
    }
    int i = 0, j = 0;
    int m = haystack.size(), n = needle.size();
    while(i <= (m - n)) {
      j = 0;
      while(haystack[i] == needle[j]) {
        i++;
        j++;
        if (j == n) {
          return (i - n);
        }
      }
      i = i - j + 1;
    }
    return -1;
  }
};
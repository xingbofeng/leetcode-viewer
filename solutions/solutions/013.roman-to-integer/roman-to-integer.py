class Solution(object):
    def romanToInt(self, s):
      hashmap = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
      };
      result = 0;
      for i in range(0,len(s)):
        if i == 0:
          result += hashmap[s[i]]
        elif hashmap[s[i - 1]] >= hashmap[s[i]]:
          result += hashmap[s[i]]
        elif hashmap[s[i - 1]] < hashmap[s[i]]:
          print(i)
          result += hashmap[s[i]] - 2 * hashmap[s[i - 1]]
      return result
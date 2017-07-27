class Solution(object):
    def isPalindrome(self, x):
      if x < 0:
        return False
      elif x == 0:
        return True
      else :
        prenum = x
        reverse = 0
        while x != 0:
          y = x % 10
          x = int(x / 10)
          reverse = y + 10 * reverse
        return reverse == prenum
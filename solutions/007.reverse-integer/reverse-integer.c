int reverse(int x) {
  long long reverseNum = 0;
    while(x != 0) {
      long long y = x % 10;
      x = x / 10;
      reverseNum = 10 * reverseNum + y;
    }
    return (reverseNum < INT_MIN || reverseNum > INT_MAX) ? 0 : reverseNum;
}
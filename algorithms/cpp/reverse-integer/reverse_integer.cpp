
/***********************************************************************************
7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
Example 4:

Input: x = 0
Output: 0
 

Constraints:

-2^31 <= x <= 2^31 - 1
***********************************************************************************/
#include <climits>
#include <cmath>

class Solution {

public:
  int reverse(int x) {
    int num = abs(x);
    int m = 0;

    while (num != 0) {
      if (m > INT_MAX / 10 || m < INT_MIN / 10) {
        return 0;
      }
      m = m * 10 + num % 10;
      num /= 10;
    }

    return x > 0 ? m : -1 * m;
  }
};

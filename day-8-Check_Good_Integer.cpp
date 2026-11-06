/*
 * DATE: 06/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/check-good-integer/?envType=problem-list-v2&envId=math
 * PROBLEM STATEMENT: 
 *You are given a positive integer n.
  Let digitSum be the sum of the digits of n, and let squareSum be the sum of the squares of the digits of n.
  An integer is called good if squareSum - digitSum >= 50.

  Return true if n is good. Otherwise, return false.

  Example 1:

  Input: n = 1000

  Output: false

  Explanation:
  The digits of 1000 are 1, 0, 0, and 0.
  The digitSum is 1 + 0 + 0 + 0 = 1.
  The squareSum is 12 + 02 + 02 + 02 = 1.
  The squareSum - digitSum is 1 - 1 = 0. As 0 is not greater than or equal to 50, the output is false.
  Example 2:
  Input: n = 19
  Output: true
  Explanation:
  The digits of 19 are 1 and 9.
  The digitSum is 1 + 9 = 10.
  The squareSum is 12 + 92 = 1 + 81 = 82.
  The squareSum - digitSum is 82 - 10 = 72. As 72 is greater than or equal to 50, the output is true.
 * ----------------------------------------
 *
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used it that first i get the last digit of the number and then add it to the digit sum and also add the square of that digit to the square sum and then remove that last digit from the number and repeat this process until the number becomes 0. After that i check if the difference between square sum and digit sum is greater than or equal to 50 or not if it is then return true else false.
 *
 * ----------------------------------------
 *
 * ----------------------------------------
 */

#include <iostream>
using namespace std;
class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum=0, squaresum=0, temp=n;
        while(temp>0){
            int digit=temp%10;
            digitsum+=digit;
            squaresum+=digit*digit;
            temp/=10;
        }

        return squaresum - digitsum >= 50;
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;
    cout << s.checkGoodInteger(n) << endl;

    return 0;
}
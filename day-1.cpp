/*
 * DATE: 30/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/add-two-integers/description/
 * PROBLEM STATEMENT: 
   Given two integers num1 and num2, return the sum of the two integers.
   Example 1:
   Input: num1 = 12, num2 = 5
   Output: 17
   Explanation: num1 is 12, num2 is 5, and their sum is 12 + 5 = 17, so 17 is returned.
   Example 2:

   Input: num1 = -10, num2 = 4
   Output: -6
   Explanation: num1 + num2 = -6, so -6 is returned.
  
   Constraints:
   -100 <= num1, num2 <= 100

 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * basic arithmetic operation, addition of two integers, understanding constraints, and implementing a simple function to return the sum.
   input of two number is taken and according to it the addition of numbers is being returned.
 
 *
 * ----------------------------------------
 * ----------------------------------------
 */

#include <iostream>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {

        return num1+num2;
        
    }
};

int main() {
    Solution solve;
    int num1, num2;
    cin >> num1 >> num2;
    cout << solve.sum(num1, num2) << endl;
    return 0;
}
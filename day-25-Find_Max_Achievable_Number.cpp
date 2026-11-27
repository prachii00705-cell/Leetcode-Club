/*
 * DATE: 26/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/find-the-maximum-achievable-number/
 * PROBLEM STATEMENT: 
    You are given two non-negative integers num and t. In one operation, you can add 2 to num or subtract 1 from num. You can perform at most t operations.

    Return the maximum integer you can achieve after performing at most t operations on num.

    Example 1:
    Input: num = 4, t = 1
    Output: 6
    Explanation: 
    - Add 2 to num once to get 6.

    Example 2:
    Input: num = 3, t = 2
    Output: 7
    Explanation: 
    - Add 2 to num twice to get 7.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * The maximum achievable number can be calculated by adding 2*t to the initial number num. This is because each operation allows us to either add 2 or subtract 1, and to maximize the number, we should always choose to add 2 for each operation.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
using namespace std;
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num+2*t;
    }
};

int main() {
    Solution sol;
    int num, t;
    cout << "Enter the value of num: ";
    cin >> num;
    cout << "Enter the value of t: ";
    cin >> t;

    cout << "The maximum achievable X is: " << sol.theMaximumAchievableX(num, t) << endl;

    return 0;
}
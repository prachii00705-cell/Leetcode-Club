/*
 * DATE: 11/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/sqrtx/description/
 * PROBLEM STATEMENT: 
 * Given a non-negative integer x, compute and return the square root of x.
    Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.
    Note: You are not allowed to use any built-in exponent function or operator.
    Example 1:
    Input: x = 4
    Output: 2
    Explanation: The square root of 4 is 2, so we return 2.
    
    Example 2:
    Input: x = 8
    Output: 2
    Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i traversed the numbers starting from 1 and kept squaring them until the square was less than or equal to the given number and then returned the number just before the square exceeded the given number.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if (x==0 || x==1) return x;
        long i=1;
        while (i*i<=x){
            i++;
        }
        return i-1;
    }
};


int main() {
    Solution sol;
    int x;
    cout << "enter the number: ";
    cin >> x;
    cout << "Square root of " << x << " is: " << sol.mySqrt(x) << endl;

    return 0;
}